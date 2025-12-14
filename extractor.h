#ifndef EXTRACTOR_H
#define EXTRACTOR_H

#include "common.h"

// Fonction principale : orchestre l'extraction de toutes les lettres
// Retourne les métadonnées remplies ou NULL en cas d'erreur
ExtractionMetadata* extract_all_letters(
    const char *image_path, 
    const char *output_dir,
    GridConfig *grid
);

// Libère la mémoire de la structure de métadonnées
void free_metadata(ExtractionMetadata *meta);

#endif
