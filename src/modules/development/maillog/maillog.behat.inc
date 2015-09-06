<?php
/**
 * @file
 *  Behat subcontext for testing whether specific emails have been sent.
 *
 * When using the DrupalExtension with Behat, this file will be autoloaded,
 * and the included step definitions will be available automatically.
 *
 * @see http://behat.org
 * @see http://drupal.org/project/drupalextension
 */
use Behat\Behat\Context\BehatContext,
    Behat\Gherkin\Node\TableNode;

use Drupal\DrupalExtension\Context\DrupalSubContextInterface;

class MaillogBehatContext extends BehatContext implements DrupalSubContextInterface {
  protected $last_id;

  /**
   * Implements DrupalSubContextInterface::getAlias().
   */
  public static function getAlias() {
    return 'maillog';
  }

  /**
   * @BeforeScenario
   */
  public function setLastId() {
    $this->last_id = (int) db_query('SELECT MAX(idmaillog) FROM {maillog}')->fetchField();
  }

  /**
   * @Then /^(\d+) emails? should be sent:$/i
   */
  public function emailsWereSent($num, TableNode $table) {
    $expected_emails = $table->getHash();

    $actual_emails = db_select('maillog', 'm')
      ->fields('m')
      ->condition('idmaillog', $this->last_id, '>')
      ->orderBy('idmaillog', 'DESC')
      ->execute()
      ->fetchAllAssoc('idmaillog', PDO::FETCH_ASSOC);

    if (count($actual_emails) < $num) {
      throw new Exception('Only ' . count($actual_emails) . ' were sent.');
    }

    $missing_emails = array();
    foreach ($expected_emails as $expected_email) {
      foreach ($actual_emails as $actual_email) {
        if ($this->emailsMatch($actual_email, $expected_email)) {
          continue 2;
        }
      }
      // No matches for the expected email.
      $missing_emails[] = $expected_email;
    }

    if (count($missing_emails) > 0) {
      $message = "Missing Emails:\n" . implode("\n", array_map('drupal_json_encode', $missing_emails));
      throw new Exception($message);
    }
  }

  /**
   * Returns TRUE if the actual email matches the expected email.
   *
   * @param array $actual
   *  An associative array of all the columns in the actual maillog database
   *  table row.
   *
   * @param array $expected
   *  The expected email values. Allowed, case insensitive keys are:
   *   - Subject:   strcasecmp comparison
   *   - To:        strcasecmp comparison
   *   - From:      strcasecmp comparison
   *   - Reply to:  strcasecmp comparison
   *   - Body:      stristr comparison
   *
   * @return bool
   */
  protected function emailsMatch($actual, $expected) {
    foreach ($expected as $part => $expected_value) {
      $part = strtolower($part);
      if ('subject' == $part) {
        $actual_value = $actual['subject'];
      }
      elseif ('to' == $part) {
        $actual_value = $actual['header_to'];
      }
      elseif ('from' == $part) {
        $actual_value = $actual['header_from'];
      }
      elseif ('reply to' == $part) {
        $actual_value = $actual['header_reply_to'];
      }
      elseif ('body' == $part) {
        // Since the body will be long it is more useful to check whether it
        // contains the expected value.
        if (!stristr($actual['body'], $expected_value)) {
          return FALSE;
        }
        continue;
      }
      else {
        throw new Exception("Unknown part in expected email '$part'");
      }

      if (strcasecmp($actual_value, $expected_value) != 0) {
        return FALSE;
      }
    }

    return TRUE;
  }

}
