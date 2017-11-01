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
#include "testProcessOrders.h"

static testProcessOrders suite_testProcessOrders;

static CxxTest::List Tests_testProcessOrders = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_testProcessOrders( "testProcessOrders.h", 29, "testProcessOrders", suite_testProcessOrders, Tests_testProcessOrders );

static class TestDescription_testProcessOrders_testShipment : public CxxTest::RealTestDescription {
public:
 TestDescription_testProcessOrders_testShipment() : CxxTest::RealTestDescription( Tests_testProcessOrders, suiteDescription_testProcessOrders, 35, "testShipment" ) {}
 void runTest() { suite_testProcessOrders.testShipment(); }
} testDescription_testProcessOrders_testShipment;

static class TestDescription_testProcessOrders_testShipment_OneOrderLeft : public CxxTest::RealTestDescription {
public:
 TestDescription_testProcessOrders_testShipment_OneOrderLeft() : CxxTest::RealTestDescription( Tests_testProcessOrders, suiteDescription_testProcessOrders, 49, "testShipment_OneOrderLeft" ) {}
 void runTest() { suite_testProcessOrders.testShipment_OneOrderLeft(); }
} testDescription_testProcessOrders_testShipment_OneOrderLeft;

static class TestDescription_testProcessOrders_testShipment_NoOrders : public CxxTest::RealTestDescription {
public:
 TestDescription_testProcessOrders_testShipment_NoOrders() : CxxTest::RealTestDescription( Tests_testProcessOrders, suiteDescription_testProcessOrders, 72, "testShipment_NoOrders" ) {}
 void runTest() { suite_testProcessOrders.testShipment_NoOrders(); }
} testDescription_testProcessOrders_testShipment_NoOrders;

static class TestDescription_testProcessOrders_testOrder : public CxxTest::RealTestDescription {
public:
 TestDescription_testProcessOrders_testOrder() : CxxTest::RealTestDescription( Tests_testProcessOrders, suiteDescription_testProcessOrders, 87, "testOrder" ) {}
 void runTest() { suite_testProcessOrders.testOrder(); }
} testDescription_testProcessOrders_testOrder;

#include <cxxtest/Root.cpp>
