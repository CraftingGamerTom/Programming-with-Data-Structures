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
#include "testSorting.h"

static testSorting suite_testSorting;

static CxxTest::List Tests_testSorting = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_testSorting( "testSorting.h", 28, "testSorting", suite_testSorting, Tests_testSorting );

static class TestDescription_testSorting_testMyFunction : public CxxTest::RealTestDescription {
public:
 TestDescription_testSorting_testMyFunction() : CxxTest::RealTestDescription( Tests_testSorting, suiteDescription_testSorting, 34, "testMyFunction" ) {}
 void runTest() { suite_testSorting.testMyFunction(); }
} testDescription_testSorting_testMyFunction;

#include <cxxtest/Root.cpp>
