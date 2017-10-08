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
#include "ClockTest.h"

static ClockTest suite_ClockTest;

static CxxTest::List Tests_ClockTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ClockTest( "ClockTest.h", 24, "ClockTest", suite_ClockTest, Tests_ClockTest );

static class TestDescription_ClockTest_testClock : public CxxTest::RealTestDescription {
public:
 TestDescription_ClockTest_testClock() : CxxTest::RealTestDescription( Tests_ClockTest, suiteDescription_ClockTest, 28, "testClock" ) {}
 void runTest() { suite_ClockTest.testClock(); }
} testDescription_ClockTest_testClock;

static class TestDescription_ClockTest_testSetClock : public CxxTest::RealTestDescription {
public:
 TestDescription_ClockTest_testSetClock() : CxxTest::RealTestDescription( Tests_ClockTest, suiteDescription_ClockTest, 42, "testSetClock" ) {}
 void runTest() { suite_ClockTest.testSetClock(); }
} testDescription_ClockTest_testSetClock;

static class TestDescription_ClockTest_testClockTick : public CxxTest::RealTestDescription {
public:
 TestDescription_ClockTest_testClockTick() : CxxTest::RealTestDescription( Tests_ClockTest, suiteDescription_ClockTest, 54, "testClockTick" ) {}
 void runTest() { suite_ClockTest.testClockTick(); }
} testDescription_ClockTest_testClockTick;

#include <cxxtest/Root.cpp>
