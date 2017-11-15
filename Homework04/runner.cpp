/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/ErrorPrinter.h>

int main() {
 return CxxTest::ErrorPrinter().run();
}
#include "testExpression_Tree.h"

static testExpression_Tree suite_testExpression_Tree;

static CxxTest::List Tests_testExpression_Tree = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_testExpression_Tree( "testExpression_Tree.h", 29, "testExpression_Tree", suite_testExpression_Tree, Tests_testExpression_Tree );

static class TestDescription_testExpression_Tree_testMyFunction : public CxxTest::RealTestDescription {
public:
 TestDescription_testExpression_Tree_testMyFunction() : CxxTest::RealTestDescription( Tests_testExpression_Tree, suiteDescription_testExpression_Tree, 36, "testMyFunction" ) {}
 void runTest() { suite_testExpression_Tree.testMyFunction(); }
} testDescription_testExpression_Tree_testMyFunction;

#include <cxxtest/Root.cpp>
