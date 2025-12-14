#ifndef FILE_UTILS_H
#define FILE_UTILS_H

#include <stdbool.h>

// Crée l'arborescence de dossiers nécessaire (ex: output/image1/letters)
// Retourne 0 si succès, -1 si échec
int create_directory_tree(const char *base_output_path);

// Vérifie si un fichier existe
bool file_exists(const char *path);

// Construit le chemin complet (helper)
void join_paths(char *buffer, const char *folder, const char *file);

#endif
