#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#include "Matrix.h"

Matrix mat_create(size_t rows, size_t cols) {
	Matrix mat = malloc(sizeof(struct matrix_st));
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

bool mat_equals(const Matrix m1, const Matrix m2) {
	if(m1 == NULL){
		return false;
	}
	if(m2 == NULL){
		return false;
	}

	if(m1->rows != m2->rows){
		return false;
	}
	if(m1->cols != m2->cols){
		return false;
	}

	for(size_t i = 0; i < m1->rows; i++){
		for(size_t j = 0; j < m2-> cols; j++){
			if(m1->data[i][j] != m2->data[i][j]){
				return false;
			}
		}
	}
	return true;
}

void mat_scalar_mult(Matrix mat, float data) {
	for(size_t i = 0; i < mat->rows; i++) {
		for(size_t j = 0; j < mat->cols; j++) {
			mat->data[i][j] = data;
		}
	}
}

Matrix mat_mult(const Matrix m1, const Matrix m2) {
	if(m1 == NULL || m2 == NULL) {
		return NULL;
	}

	if(m1->cols != m2->rows) {
		return NULL;
	}

	size_t r1 = m1->rows;
	size_t c1 = m1->cols;
	size_t c2 = m2->cols;

	Matrix done = mat_create(r1, c2);
	if (done == NULL) {
		return NULL;
	}

	for(size_t i = 0; i < r1; i++) {
		for(size_t j = 0; j < c2; j++){
			float sum  = 0;
			for(size_t k = 0; k < c1; k++) {
				sum += m1->data[i][k] * m2->data[k][j];
			}
		result->data[i][j] = sum;
		}
	}
	return done;
}

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
