#ifndef MATRIX_H
#define MATRIX_H

void print_matrix(float matrix[3][3]);
void init_zero_matrix(float matrix[3][3]);
void init_identity_matrix(float matrix[3][3]);
void add_matrices(float matrix_a[3][3], float matrix_b[3][3], float result_matrix[3][3]);
void multiply_matrix_by_scalar(float matrix[3][3], float scalar);
void multiply_matrices(float matrix_a[3][3], float matrix_b[3][3], float result_matrix[3][3]);

#endif