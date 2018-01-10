/*
 * TestCase.h
 *
 *  Created on: Dec 9, 2017
 *      Author: TomWR
 *
 * This file uses the CxxTest library <TestSuite> to create test cases
 * for a students project. For full cxxtest documentation see the userguide
 * located in your C:\MinGW\cxxtest\doc or visit:
 * http://cxxtest.com/guide.html
 *
 */

#ifndef TEST_CASE_H
#define	TEST_CASE_H

#include <cxxtest/TestSuite.h>

//Include your classes header file(s) below and uncomment.
//#include "myClass.h"

#include <iostream>
#include <string>

#include <fstream>
#include "Binary_Search_Tree.h"
#include "AVL_Tree.h"
#include "pre_order_traversal.h"

using namespace std;

class testSorting: public CxxTest::TestSuite {
public:

	//All tests should start with the word 'test' followed by
	//the name of the function being tested.

	void testMyFunction() {

		/** Program to test binary tree class */

		ostringstream out;
		Binary_Search_Tree<string>* the_tree = NULL;
		the_tree = new AVL_Tree<string>;
		string line;

		ifstream myfile("words.txt");

		if (myfile.is_open()) {
			while (getline(myfile, line)) {
				the_tree->insert(line);
			}
			myfile.close();
		} else {
			cout << "Unable to open file";
		}

		pre_order_traversal(*the_tree, out, 0);

		string test = "jumps\r\n  brown\r\n    The\r\n      null\n      null\n    fox\r\n      dog\n        null\n        null\n      null\n  quick\r\n    over\r\n      lazy\r\n        null\n        null\n      null\n    the\r\n      null\n      null\n";

		TS_ASSERT_EQUALS(test, out.str());
		delete the_tree;
	}
};
#endif	/* %<%GUARD_NAME%>% */

