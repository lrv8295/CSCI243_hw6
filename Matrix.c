#include <stdio.h>
#include <stdbool.h>

#include "Matrix.h"

Matrix mat_create(size_t rows, size_t cols) {}

void mat_destroy(Matrix mat) {}

void mat_init(Matrix mat, const float data[]) {}

Matrix mat_duplicate(const Matrix mat) {}

bool mat_equals(const Matrix m1, const Matrix m2) {}

void mat_scalar_mult(Matrix mat, float data) {}

Matrix mat_mult(const Matrix m1, const Matrix m2) {}

Status mat_get_cell(const Matrix mat, float *data, size_t row, size_t col) {}

Status mat_get_row (consta Matrix mat, float data[]) {}

Status mat_set_cell(Matrix mat, float data, size_t row, size_t col) {}

Status mat_set_row(Matrix mat, const float data[], size_t row) {}

Matrix mat_transpose(const Matrix mat) {}

void mat_print(const Matrix mat, FILE *stream) {}
