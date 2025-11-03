#include <stdio.h>
#include <stdbool.h>

#include "Matrix.h"

Matrix mat_create(size_t rows, size_t cols) {
	Matrix mat = malloc(sizeof(MatrixStruct));
	if (mat == NULL) {
		return NULL;
	}

	mat->rows = rows;
	mat->cols = cols;

	mat->data = malloc(rows * sizeof(float *));
	if (mat->data == NULL) {
		free(mat);
		return NULL;
	}

	for (size_t i = 0; i < rows; i++) {
		mat->data[i] = calloc(cols, sizeof(float));
		if (mat->data[i] == NULL) {
	    		for (size_t j = 0; j < i; j++){
	        		free(mat->data[j]);
			}
	    		free(mat->data);
	    		free(mat);
	    		return NULL;
		}
	}

	if (rows == cols) {
		for (size_t i = 0; i < rows; i++) {
		    mat->data[i][i] = 1;
		}
	}

	return mat;
}

void mat_destroy(Matrix mat) {
	for (size_t i = 0; i < mat->rows; i++) {
		free(mat->data[i]);
	}
	free(mat->data);
	free(mat);
}

void mat_init(Matrix mat, const float data[]) {
	size_t index = 0;
	for(size_t i = 0; i < mat->rows; i++){
		for(size_t j = 0; j < mat->cols; j++){
			mat->data[i][j] = data[index++];
		}
	}
}

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
