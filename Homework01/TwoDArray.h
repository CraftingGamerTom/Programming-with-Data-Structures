/*
 * TwoDArray.h
 *
 *  Created on: Sep 16, 2017
 *      Author: Thomas Rokicki
 */

#ifndef TWODARRAY_H_
#define TWODARRAY_H_

#include <string>

using namespace std;

// *the_array is a two dimensional array; row_num is the row size ; col_size is column size; row_vals is the new the row
void set_row(double *the_array, int row_num, int col_size, double *row_vals); // Stores the array of row_ vals in row
// return a row of two-dimensional array by row number.
double* get_row(double *the_array, int row_num, int col_size); // Returns the specified row from a two dimensional array
// set a value in a two-dimensional array by row and column number
void set_element(double *the_array, int row_num, int col_size, int col_num,
		double val); // Sets the specified element
// return a value from a two-dimensional array by row and column number.
double get_element(double *the_array, int row_num, int col_size, int col_num); // Returns the specified element
double sum(double *the_array, int row_size, int col_size); // Returns sum of the values in the array
double find_max(double *the_array, int row_size, int col_size); // Returns the largest value in the array
double find_min(double *the_array, int row_size, int col_size); // Returns the smallest value in the array
string to_string(double *the_array, int row_size, int col_size); // Returns a string representing the matrix

#endif /* TWODARRAY_H_ */
