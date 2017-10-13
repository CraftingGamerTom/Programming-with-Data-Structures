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

#ifndef TESTVECTOR_H
#define	TESTVECTOR_H

#include "vector.h"

#include <cxxtest/TestSuite.h>
//Include your classes header file(s) below and uncomment.
//#include "myClass.h"

class testVector : public CxxTest::TestSuite
{
public:

	//All tests should start with the word 'test' followed by
	//the name of the function being tested.

	void testMyFunction() {
		//Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.
		KW::vector<int> vect1;
		for(int i = 0; i< 10; i++)
		{
			vect1.push_back(i);
		}
		for(int i = 0; i< 10; i++)
		{
			TS_ASSERT_EQUALS(vect1[i], i);
		}
	}
};
#endif	/* %<%GUARD_NAME%>% */
