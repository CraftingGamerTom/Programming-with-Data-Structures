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
#include "testVector.h"

static testVector suite_testVector;

static CxxTest::List Tests_testVector = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_testVector( "testVector.h", 23, "testVector", suite_testVector, Tests_testVector );

static class TestDescription_testVector_testMyFunction : public CxxTest::RealTestDescription {
public:
 TestDescription_testVector_testMyFunction() : CxxTest::RealTestDescription( Tests_testVector, suiteDescription_testVector, 30, "testMyFunction" ) {}
 void runTest() { suite_testVector.testMyFunction(); }
} testDescription_testVector_testMyFunction;

#include <cxxtest/Root.cpp>
