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

#ifndef TEST_EXPRESSION_TREE_H
#define	TEST_EXPRESSION_TREE_H

#include <cxxtest/TestSuite.h>

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>  // Needed for exit()
#include "Expression_Tree.h"
using namespace std;

//Include your classes header file(s) below and uncomment.
//#include "myClass.h"

class testExpression_Tree : public CxxTest::TestSuite
{
    public:

        //All tests should start with the word 'test' followed by
        //the name of the function being tested.

        void testMyFunction(){
    		class Expression_Tree the_tree;

    	    string filename="test.txt";
    	    ifstream inputFile;
    	    // Open the file
    	    inputFile.open(filename.c_str());
    	    the_tree.read_expression_tree(inputFile);
    	    double v = the_tree.evaluate();
    	    cout << "The value is " << v << endl;

    	    TS_ASSERT_EQUALS(v, 5.0);
        }
};
#endif	/* %<%GUARD_NAME%>% */
