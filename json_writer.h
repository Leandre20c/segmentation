#ifndef JSON_WRITER_H
#define JSON_WRITER_H

#include "common.h"

// Écrit le fichier metadata.json
int write_metadata_json(const ExtractionMetadata *meta, const char *output_path);

#endif
