#ifndef SEGMENTATION_PIPELINE_H
#define SEGMENTATION_PIPELINE_H

/**
 * @brief Runs the entire non-interactive segmentation pipeline.
 *
 * This function takes a directory containing a preprocessed image and its
 * coordinate file, extracts all the characters from the grid and word list,
 * and saves them as individual images and a metadata JSON file.
 *
 * @param input_dir The directory containing 'output_detected.png' and
 *                  'coordinates.txt'.
 * @param rows The number of rows in the word search grid.
 * @param cols The number of columns in the word search grid.
 * @return 0 on success, non-zero on failure.
 */
int run_segmentation(const char *input_dir, int rows, int cols);

#endif // SEGMENTATION_PIPELINE_H
