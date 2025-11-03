#include <stdio.h>
#include <stdbool.h>

#include "Matrix.h"

Matrix mat_create(size_t rows, size_t cols) {
	printf("%zu, %zu", rows, cols);
	return NULL;
}

//void mat_destroy(Matrix mat) {
	//printf(mat);
//}

//void mat_init(Matrix mat, const float data[]) {
	//printf(mat);
	//printf(data)
//}

Matrix mat_duplicate(const Matrix mat) {
	return mat;
}

//bool mat_equals(const Matrix m1, const Matrix m2) {
	//printf(m1);
	//printf(m2);
	//return false;
//}

//void mat_scalar_mult(Matrix mat, float data) {
	//printf(mat);
	//printf(data);
//}

//Matrix mat_mult(const Matrix m1, const Matrix m2) {
	//printf(m1);
	//printf(m2);
//	return m1;
//}

//Status mat_get_cell(const Matrix mat, float *data, size_t row, size_t col) {
	//printf(mat);
	//printf(*data)
	//printf(col);
	//return SUCCESS;
//}

//Status mat_get_row (const Matrix mat, float data[]) {
	//printf(mat);
	//printf(data);
	//return SUCCESS;
//}

//Status mat_set_cell(Matrix mat, float data, size_t row, size_t col) {
	//printf(mat);
	//printf(data);
	//printf(row);
	//printf(col);
	//return SUCCESS;
//}

//Status mat_set_row(Matrix mat, const float data[], size_t row) {
	//printf(mat);
	//printf(data);
	//printf(row);
	//return SUCCESS;
//}

Matrix mat_transpose(const Matrix mat) {
	return mat;
}

void mat_print(const Matrix mat, FILE *stream) {
	//printf(mat);
	//printf(*stream);
	Matrix temp = mat;
	stream = stream;
	printf("HI");
}
