#ifndef PARSER_H
#define PARSER_H

#include "common.h"

// Parse le fichier coordinates.txt complet
// Retourne un pointeur alloué dynamiquement vers Coordinates (à free plus tard)
// Retourne NULL en cas d'erreur
Coordinates* parse_coordinates_file(const char *filepath);

// Helper pour convertir 4 coins en BBox (x, y, w, h)
BBox corners_to_bbox(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4);

#endif
