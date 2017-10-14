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
#include "testTwoDArray.h"

static testTwoDArray suite_testTwoDArray;

static CxxTest::List Tests_testTwoDArray = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_testTwoDArray( "testTwoDArray.h", 28, "testTwoDArray", suite_testTwoDArray, Tests_testTwoDArray );

static class TestDescription_testTwoDArray_testRow : public CxxTest::RealTestDescription {
public:
 TestDescription_testTwoDArray_testRow() : CxxTest::RealTestDescription( Tests_testTwoDArray, suiteDescription_testTwoDArray, 36, "testRow" ) {}
 void runTest() { suite_testTwoDArray.testRow(); }
} testDescription_testTwoDArray_testRow;

static class TestDescription_testTwoDArray_testElement : public CxxTest::RealTestDescription {
public:
 TestDescription_testTwoDArray_testElement() : CxxTest::RealTestDescription( Tests_testTwoDArray, suiteDescription_testTwoDArray, 50, "testElement" ) {}
 void runTest() { suite_testTwoDArray.testElement(); }
} testDescription_testTwoDArray_testElement;

static class TestDescription_testTwoDArray_testSum : public CxxTest::RealTestDescription {
public:
 TestDescription_testTwoDArray_testSum() : CxxTest::RealTestDescription( Tests_testTwoDArray, suiteDescription_testTwoDArray, 62, "testSum" ) {}
 void runTest() { suite_testTwoDArray.testSum(); }
} testDescription_testTwoDArray_testSum;

static class TestDescription_testTwoDArray_testFindMax : public CxxTest::RealTestDescription {
public:
 TestDescription_testTwoDArray_testFindMax() : CxxTest::RealTestDescription( Tests_testTwoDArray, suiteDescription_testTwoDArray, 72, "testFindMax" ) {}
 void runTest() { suite_testTwoDArray.testFindMax(); }
} testDescription_testTwoDArray_testFindMax;

static class TestDescription_testTwoDArray_testFindMin : public CxxTest::RealTestDescription {
public:
 TestDescription_testTwoDArray_testFindMin() : CxxTest::RealTestDescription( Tests_testTwoDArray, suiteDescription_testTwoDArray, 83, "testFindMin" ) {}
 void runTest() { suite_testTwoDArray.testFindMin(); }
} testDescription_testTwoDArray_testFindMin;

static class TestDescription_testTwoDArray_testToString : public CxxTest::RealTestDescription {
public:
 TestDescription_testTwoDArray_testToString() : CxxTest::RealTestDescription( Tests_testTwoDArray, suiteDescription_testTwoDArray, 92, "testToString" ) {}
 void runTest() { suite_testTwoDArray.testToString(); }
} testDescription_testTwoDArray_testToString;

#include <cxxtest/Root.cpp>
