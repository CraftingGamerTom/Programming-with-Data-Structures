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

#ifndef TEST_SORTING_H
#define	TEST_SORTING_H

#include <cxxtest/TestSuite.h>

#include <iterator>
#include <vector>

//Include your classes header file(s) below and uncomment.
//#include "myClass.h"

extern int testSorts(int[], int[], int, int); // LOL thank you for teaching me extern

class testSorting: public CxxTest::TestSuite {
public:

	//All tests should start with the word 'test' followed by
	//the name of the function being tested.

	void testMyFunction() {

		int tot_compares[7];
		int tot_exchanges[7];
		int num_sorts = 7;
		int num_items = 100;

	testSorts(tot_compares, tot_exchanges, num_sorts, num_items);

	TS_ASSERT_DIFFERS(tot_compares[0], 0);
	TS_ASSERT_DIFFERS(tot_compares[1], 0);
	TS_ASSERT_DIFFERS(tot_compares[2], 0);
	TS_ASSERT_DIFFERS(tot_compares[3], 0);
	TS_ASSERT_DIFFERS(tot_compares[4], 0);
	TS_ASSERT_DIFFERS(tot_compares[5], 0);
	TS_ASSERT_DIFFERS(tot_compares[6], 0);

	TS_ASSERT_DIFFERS(tot_exchanges[0], 0);
	TS_ASSERT_DIFFERS(tot_exchanges[1], 0);
	TS_ASSERT_DIFFERS(tot_exchanges[2], 0);
	TS_ASSERT_DIFFERS(tot_exchanges[3], 0);
	TS_ASSERT_DIFFERS(tot_exchanges[4], 0);
	TS_ASSERT_DIFFERS(tot_exchanges[5], 0);
	TS_ASSERT_DIFFERS(tot_exchanges[6], 0);

}
};
#endif	/* %<%GUARD_NAME%>% */
