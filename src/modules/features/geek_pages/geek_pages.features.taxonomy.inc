<?php
/**
 * @file
 * geek_pages.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function geek_pages_taxonomy_default_vocabularies() {
  return array(
    'geek_page_terms' => array(
      'name' => 'Geek Page terms',
      'machine_name' => 'geek_page_terms',
      'description' => 'Items to categorize Geek Pages.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
