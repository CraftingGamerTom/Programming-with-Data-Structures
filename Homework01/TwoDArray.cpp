/*
 * TwoDArray.cpp
 *
 *  Created on: Sep 16, 2017
 *      Author: Thomas Rokicki
 */
#include <string>
#include "string.h"

#include "TwoDArray.h"

#include <sstream>

using namespace std;

// *the_array is a two dimensional array; row_num is the row size ; col_size is column size; row_vals is the new the row
// Stores the array of row_ vals in row
void set_row(double *the_array, int row_num, int col_size, double *row_vals) {

	/*
	double* p;
	p = (the_array + row_num * col_size);
	*/

	for (int i = 0; i < col_size; i++) {
		*((the_array + row_num * col_size) + i) = *(row_vals + i);
		// p[i] = row_vals[i];
	}

}

// return a row of two-dimensional array by row number.
// Returns the specified row from a two dimensional array
double* get_row(double *the_array, int row_num, int col_size) {

	double* p;

	p = (the_array + row_num * col_size);

	return p;
}

// set a value in a two-dimensional array by row and column number
// Sets the specified element
void set_element(double *the_array, int row_num, int col_size, int col_num,
		double val) {

	*((the_array + row_num * col_size) + col_num) = val;
}

// return a value from a two-dimensional array by row and column number.
// Returns the specified element
double get_element(double *the_array, int row_num, int col_size, int col_num) {

	double val = *((the_array + row_num * col_size) + col_num);
	return val;
}

// Returns the smallest value in the array
double find_min(double *the_array, int row_size, int col_size) {
	double min = (*((the_array + 0 * col_size) + 1));

	for (int i1 = 0; i1 < row_size; i1++) {
		for (int i2 = 0; i2 < col_size; i2++) {
			double number = (*((the_array + i1 * col_size) + i2));
			if (number < min) {
				min = number;
			}
		}
	}

	return min;
}

// Returns the largest value in the array
double find_max(double *the_array, int row_size, int col_size) {

	double max = *((the_array + 0 * col_size) + 1);

	for (int i1 = 0; i1 < row_size; i1++) {
		for (int i2 = 0; i2 < col_size; i2++) {
			double number = (*((the_array + i1 * col_size) + i2));
			if (number > max) {
				max = number;
			}
		}
	}

	return max;
}

// Returns sum of the values in the array
double sum(double *the_array, int row_size, int col_size) {

	double sum = 0.0;

	for (int i1 = 0; i1 < row_size; i1++) {
		for (int i2 = 0; i2 < col_size; i2++) {
			sum += (*((the_array + i1 * col_size) + i2));
		}
	}

	return sum;

}

// Returns a string representing the matrix
string to_string(double *the_array, int row_size, int col_size) {

	//TODO Fix the formating of the string - currently made fast for testing.

	string arrayString = "";

	arrayString.append("[");

	for (int i = 0; i < row_size; i++) {
		for (int j = 0; j < col_size; j++) {
			double val = *((the_array + i * col_size) + j);

			string Result;          // string which will contain the result
			ostringstream convert;   // stream used for the conversion
			convert << val;      // insert the textual representation of 'Number' in the characters in the stream
			Result = convert.str(); // set 'Result' to the contents of the stream

			if(!((i == 0) && (j == 0))) {
				arrayString.append(", ");
			}

			arrayString.append(Result);
		}
	}

	arrayString.append("]");
	return arrayString;

}

