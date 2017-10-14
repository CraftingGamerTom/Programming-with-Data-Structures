/*
 * TwoDArray.cpp
 *
 *  Created on: Sep 16, 2017
 *      Author: Thomas Rokicki
 */
#include <string>

#include "TwoDArray.h"

using namespace std;

TwoDArray::TwoDArray() {
	// TODO Auto-generated constructor stub

}

TwoDArray::~TwoDArray() {
	// TODO Auto-generated destructor stub
}

// *the_array is a two dimensional array; row_num is the row size ; col_size is column size; row_vals is the new the row
// Stores the array of row_ vals in row
void TwoDArray::set_row(double *the_array, int row_num, int col_size,
		double *row_vals) {
	double* row = get_row(the_array, row_num, col_size);

	for(int i = 0; i < col_size; i++) {
		row[i] = row_vals[i];
	}

}

// return a row of two-dimensional array by row number.
// Returns the specified row from a two dimensional array
double* TwoDArray::get_row(double *the_array, int row_num, int col_size) {

	double* p;

	p = (the_array+row_num*col_size);

	return p;
}

// set a value in a two-dimensional array by row and column number
// Sets the specified element
void TwoDArray::set_element(double *the_array, int row_num, int col_size,
		int col_num, double val) {

	*((the_array+row_num*col_size) + col_num) = val;
}

// return a value from a two-dimensional array by row and column number.
// Returns the specified element
double TwoDArray::get_element(double *the_array, int row_num, int col_size,
		int col_num) {

	double val = *((the_array+row_num*col_size) + col_num);
	return val;
}

// Returns the smallest value in the array
double TwoDArray::find_min(double *the_array, int row_size, int col_size) {
	double min = (*((the_array+0*col_size) + 1));

	for (int i1 = 0; i1 < row_size; i1++) {
		for (int i2 = 0; i2 < col_size; i2++) {
			double number = (*((the_array+i1*col_size) + i2));
			if( number < min) {
				min = number;
			}
		}
	}

	return min;
}

// Returns the largest value in the array
double TwoDArray::find_max(double *the_array, int row_size, int col_size) {

	double max = *((the_array+0*col_size) + 1);

	for (int i1 = 0; i1 < row_size; i1++) {
		for (int i2 = 0; i2 < col_size; i2++) {
			double number = (*((the_array+i1*col_size) + i2));
			if( number > max) {
				max = number;
			}
		}
	}

	return max;
}

// Returns sum of the values in the array
double TwoDArray::sum(double *the_array, int row_size, int col_size) {

	double sum = 0.0;

	for (int i1 = 0; i1 < row_size; i1++) {
		for (int i2 = 0; i2 < col_size; i2++) {
			sum += (*((the_array+i1*col_size) + i2));
		}
	}

	return sum;

}

// Returns a string representing the matrix
string TwoDArray::to_string(double *the_array, int row_size, int col_size) {

	//TODO Fix the formating of the string - currently made fast for testing.

	string arrayString = "";

	arrayString.append("[");

	for (int i = 0; i < row_size; i++) {
		for (int j = 0; j < col_size; j++) {
			double val = *((the_array+i*col_size) + j);
			std::string valString = std::to_string(val);
			valString.erase ( valString.find_last_not_of('0') + 2, std::string::npos );
			arrayString.append(valString);
			arrayString.append(", ");
		}
	}
	arrayString.erase(arrayString.find_last_of(' ')-1, std::string::npos );
	// arrayString = arrayString.length()-2;
	arrayString.append("]");
	return arrayString;

}

