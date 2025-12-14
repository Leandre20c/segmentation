#ifndef COMMON_H
#define COMMON_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <SDL2/SDL.h>

// --- CONSTANTES ---
#define TARGET_SIZE 28
#define MIN_GRID_SIZE 5
#define MAX_GRID_SIZE 50
#define MARGIN_PERCENT 0.2f // 20% de marge

// --- STRUCTURES GÉOMÉTRIQUES ---

// Boîte englobante (Bounding Box)
typedef struct {
    int x;
    int y;
    int width;
    int height;
} BBox;

// Conteneur des zones détectées (venant de P1)
typedef struct {
    BBox grid_zone;     // La zone principale de la grille
    BBox list_zone;     // La liste de mots (pour usage futur)
} Coordinates;

// --- STRUCTURES GRILLE ---

// Configuration calculée de la grille
typedef struct {
    int rows;           // Nombre de lignes (ex: 17)
    int cols;           // Nombre de colonnes (ex: 17)
    int cell_width;     // Largeur calculée d'une cellule (px)
    int cell_height;    // Hauteur calculée d'une cellule (px)
    BBox zone;
    BBox list_zone;     // Zone totale utilisée pour le découpage
} GridConfig;

// --- STRUCTURES EXTRACTION ---

// Infos sur une lettre extraite
typedef struct {
    char id[8];             // "A1", "AB12"
    char filename[64];      // "letter_A1.bmp"
    int row;                // Index ligne (0-based)
    int col;                // Index colonne (0-based)
    BBox source_bbox;       // Où cela a été coupé dans l'image originale
} LetterInfo;

// Métadonnées complètes pour l'export JSON
typedef struct {
    char source_image[256]; // Chemin de l'image source
    GridConfig grid;        // Config de la grille utilisée
    int total_extracted;    // Nombre de lettres extraites
    LetterInfo *letters;    // Tableau dynamique des lettres
} ExtractionMetadata;

#endif // COMMON_H
