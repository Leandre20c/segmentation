#ifndef GRID_H
#define GRID_H

#include "common.h"

// Initialise la configuration de la grille
GridConfig init_grid_config(int rows, int cols, BBox grid_zone, BBox list_zone);

// Calcule la BBox d'une cellule spécifique
BBox grid_get_cell_bbox(const GridConfig *grid, int row, int col);

// Génère le label style Excel (A1, Z1, AA1...)
// buffer doit être d'au moins 8 chars
void grid_get_cell_label(int row, int col, char *buffer);

#endif
