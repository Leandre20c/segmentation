#ifndef LIST_SOLVER_H
#define LIST_SOLVER_H

#include <SDL2/SDL.h>
#include "common.h"

// Fonction dédiée uniquement au découpage de la liste
// Utilise un algorithme XY-Cut avec Padding pour ne rien rater
void solve_word_list(SDL_Surface *src, BBox zone, const char *output_dir);

#endif
