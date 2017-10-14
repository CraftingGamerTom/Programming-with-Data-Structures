/* 
 * File:   %<%NAME%>%.%<%EXTENSION%>%
 * Author: %<%USER%>%
 *
 * Created on %<%DATE%>%, %<%TIME%>%
 * 
 * This file uses the CxxTest library <TestSuite> to create test cases 
 * for a students project. For full cxxtest documentation see the userguide
 * located in your C:\MinGW\cxxtest\doc or visit: 
 * http://cxxtest.com/guide.html
 * 
 */

#ifndef TESTTWODARRAY_H
#define	TESTTWODARRAY_H

#include <cxxtest/TestSuite.h>

#include "TwoDArray.h"

#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <strings.h>
//Include your classes header file(s) below and uncomment.
//#include "myClass.h"

class testTwoDArray: public CxxTest::TestSuite {
public:

	double masterArray[5][5];

	//All tests should start with the word 'test' followed by
	//the name of the function being tested.

	void testRow() {

		double arrayOfDoubles[] = { 1.0, 2.0, 3.0, 4.0, 5.0 };

		set_row(&masterArray[0][0], 0, 5, &arrayOfDoubles[0]);
		double* rowLocation = get_row(&masterArray[0][0], 0, 5);
		double* expLocation = &arrayOfDoubles[0];

		TS_ASSERT_SAME_DATA(rowLocation, expLocation, 5 * sizeof(double));

		//Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.

	}

	void testElement() {
		// Sets the array elements
		double arrayOfDoubles[] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
		set_row(&masterArray[0][0], 0, 5, &arrayOfDoubles[0]);

		double expVal = 10;
		set_element(&masterArray[0][0], 0, 5, 0, expVal);
		double val = get_element(&masterArray[0][0], 0, 5, 0);

		TS_ASSERT_EQUALS(val, expVal);
	}

	void testSum() {
		// Sets the array elements
		double arrayOfDoubles[] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
		set_row(&masterArray[0][0], 0, 5, &arrayOfDoubles[0]);

		double expSum = 15;
		double theSum = sum(&masterArray[0][0], 1, 5);
		TS_ASSERT_EQUALS(theSum, expSum);
	}

	void testFindMax() {
		// Sets the array elements
		double arrayOfDoubles[] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
		set_row(&masterArray[0][0], 0, 5, &arrayOfDoubles[0]);

		double expVal = 5;
		double val = find_max(&masterArray[0][0], 1, 5);

		TS_ASSERT_EQUALS(val, expVal);
	}

	void testFindMin() {
		double arrayOfDoubles[] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
		set_row(&masterArray[0][0], 0, 5, &arrayOfDoubles[0]);

		double expVal = 1;
		double val = find_min(&masterArray[0][0], 1, 5);
		TS_ASSERT_EQUALS(val, expVal);
	}

	void testToString() {
		double arrayOfDoubles[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
		set_row(&masterArray[0][0], 0, 5, &arrayOfDoubles[0]);

		string expVal = "[1.1, 2.2, 3.3, 4.4, 5.5]";
		string val = to_string(&masterArray[0][0], 1, 5);
		TS_ASSERT_EQUALS(expVal, val);
	}
};
#endif	/* TESTTWODARRAY_H */
