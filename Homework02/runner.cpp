/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#define _CXXTEST_HAVE_EH
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/ErrorPrinter.h>

int main() {
 return CxxTest::ErrorPrinter().run();
}
#include "testSingle_Linked_List.h"

static testSingle_Linked_List suite_testSingle_Linked_List;

static CxxTest::List Tests_testSingle_Linked_List = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_testSingle_Linked_List( "testSingle_Linked_List.h", 23, "testSingle_Linked_List", suite_testSingle_Linked_List, Tests_testSingle_Linked_List );

static class TestDescription_testSingle_Linked_List_test_PushFront_Empty : public CxxTest::RealTestDescription {
public:
 TestDescription_testSingle_Linked_List_test_PushFront_Empty() : CxxTest::RealTestDescription( Tests_testSingle_Linked_List, suiteDescription_testSingle_Linked_List, 32, "test_PushFront_Empty" ) {}
 void runTest() { suite_testSingle_Linked_List.test_PushFront_Empty(); }
} testDescription_testSingle_Linked_List_test_PushFront_Empty;

static class TestDescription_testSingle_Linked_List_test_PushFrontConst_Empty : public CxxTest::RealTestDescription {
public:
 TestDescription_testSingle_Linked_List_test_PushFrontConst_Empty() : CxxTest::RealTestDescription( Tests_testSingle_Linked_List, suiteDescription_testSingle_Linked_List, 47, "test_PushFrontConst_Empty" ) {}
 void runTest() { suite_testSingle_Linked_List.test_PushFrontConst_Empty(); }
} testDescription_testSingle_Linked_List_test_PushFrontConst_Empty;

static class TestDescription_testSingle_Linked_List_test_PushFront_Populated : public CxxTest::RealTestDescription {
public:
 TestDescription_testSingle_Linked_List_test_PushFront_Populated() : CxxTest::RealTestDescription( Tests_testSingle_Linked_List, suiteDescription_testSingle_Linked_List, 64, "test_PushFront_Populated" ) {}
 void runTest() { suite_testSingle_Linked_List.test_PushFront_Populated(); }
} testDescription_testSingle_Linked_List_test_PushFront_Populated;

static class TestDescription_testSingle_Linked_List_test_PushBack_Empty : public CxxTest::RealTestDescription {
public:
 TestDescription_testSingle_Linked_List_test_PushBack_Empty() : CxxTest::RealTestDescription( Tests_testSingle_Linked_List, suiteDescription_testSingle_Linked_List, 82, "test_PushBack_Empty" ) {}
 void runTest() { suite_testSingle_Linked_List.test_PushBack_Empty(); }
} testDescription_testSingle_Linked_List_test_PushBack_Empty;

static class TestDescription_testSingle_Linked_List_test_PushBackConst_Empty : public CxxTest::RealTestDescription {
public:
 TestDescription_testSingle_Linked_List_test_PushBackConst_Empty() : CxxTest::RealTestDescription( Tests_testSingle_Linked_List, suiteDescription_testSingle_Linked_List, 97, "test_PushBackConst_Empty" ) {}
 void runTest() { suite_testSingle_Linked_List.test_PushBackConst_Empty(); }
} testDescription_testSingle_Linked_List_test_PushBackConst_Empty;

static class TestDescription_testSingle_Linked_List_test_PushBack_Populated : public CxxTest::RealTestDescription {
public:
 TestDescription_testSingle_Linked_List_test_PushBack_Populated() : CxxTest::RealTestDescription( Tests_testSingle_Linked_List, suiteDescription_testSingle_Linked_List, 113, "test_PushBack_Populated" ) {}
 void runTest() { suite_testSingle_Linked_List.test_PushBack_Populated(); }
} testDescription_testSingle_Linked_List_test_PushBack_Populated;

static class TestDescription_testSingle_Linked_List_test_PopFront_Empty : public CxxTest::RealTestDescription {
public:
 TestDescription_testSingle_Linked_List_test_PopFront_Empty() : CxxTest::RealTestDescription( Tests_testSingle_Linked_List, suiteDescription_testSingle_Linked_List, 131, "test_PopFront_Empty" ) {}
 void runTest() { suite_testSingle_Linked_List.test_PopFront_Empty(); }
} testDescription_testSingle_Linked_List_test_PopFront_Empty;

static class TestDescription_testSingle_Linked_List_test_PopFront_ToNULL : public CxxTest::RealTestDescription {
public:
 TestDescription_testSingle_Linked_List_test_PopFront_ToNULL() : CxxTest::RealTestDescription( Tests_testSingle_Linked_List, suiteDescription_testSingle_Linked_List, 144, "test_PopFront_ToNULL" ) {}
 void runTest() { suite_testSingle_Linked_List.test_PopFront_ToNULL(); }
} testDescription_testSingle_Linked_List_test_PopFront_ToNULL;

static class TestDescription_testSingle_Linked_List_test_PopFront_Populated : public CxxTest::RealTestDescription {
public:
 TestDescription_testSingle_Linked_List_test_PopFront_Populated() : CxxTest::RealTestDescription( Tests_testSingle_Linked_List, suiteDescription_testSingle_Linked_List, 159, "test_PopFront_Populated" ) {}
 void runTest() { suite_testSingle_Linked_List.test_PopFront_Populated(); }
} testDescription_testSingle_Linked_List_test_PopFront_Populated;

static class TestDescription_testSingle_Linked_List_test_PopBack_Empty : public CxxTest::RealTestDescription {
public:
 TestDescription_testSingle_Linked_List_test_PopBack_Empty() : CxxTest::RealTestDescription( Tests_testSingle_Linked_List, suiteDescription_testSingle_Linked_List, 182, "test_PopBack_Empty" ) {}
 void runTest() { suite_testSingle_Linked_List.test_PopBack_Empty(); }
} testDescription_testSingle_Linked_List_test_PopBack_Empty;

static class TestDescription_testSingle_Linked_List_test_PopBack_ToNULL : public CxxTest::RealTestDescription {
public:
 TestDescription_testSingle_Linked_List_test_PopBack_ToNULL() : CxxTest::RealTestDescription( Tests_testSingle_Linked_List, suiteDescription_testSingle_Linked_List, 195, "test_PopBack_ToNULL" ) {}
 void runTest() { suite_testSingle_Linked_List.test_PopBack_ToNULL(); }
} testDescription_testSingle_Linked_List_test_PopBack_ToNULL;

static class TestDescription_testSingle_Linked_List_test_PopBack_Populated : public CxxTest::RealTestDescription {
public:
 TestDescription_testSingle_Linked_List_test_PopBack_Populated() : CxxTest::RealTestDescription( Tests_testSingle_Linked_List, suiteDescription_testSingle_Linked_List, 211, "test_PopBack_Populated" ) {}
 void runTest() { suite_testSingle_Linked_List.test_PopBack_Populated(); }
} testDescription_testSingle_Linked_List_test_PopBack_Populated;

static class TestDescription_testSingle_Linked_List_test_Front_Empty : public CxxTest::RealTestDescription {
public:
 TestDescription_testSingle_Linked_List_test_Front_Empty() : CxxTest::RealTestDescription( Tests_testSingle_Linked_List, suiteDescription_testSingle_Linked_List, 234, "test_Front_Empty" ) {}
 void runTest() { suite_testSingle_Linked_List.test_Front_Empty(); }
} testDescription_testSingle_Linked_List_test_Front_Empty;

static class TestDescription_testSingle_Linked_List_test_Front_Populated : public CxxTest::RealTestDescription {
public:
 TestDescription_testSingle_Linked_List_test_Front_Populated() : CxxTest::RealTestDescription( Tests_testSingle_Linked_List, suiteDescription_testSingle_Linked_List, 246, "test_Front_Populated" ) {}
 void runTest() { suite_testSingle_Linked_List.test_Front_Populated(); }
} testDescription_testSingle_Linked_List_test_Front_Populated;

static class TestDescription_testSingle_Linked_List_test_Front_Write : public CxxTest::RealTestDescription {
public:
 TestDescription_testSingle_Linked_List_test_Front_Write() : CxxTest::RealTestDescription( Tests_testSingle_Linked_List, suiteDescription_testSingle_Linked_List, 264, "test_Front_Write" ) {}
 void runTest() { suite_testSingle_Linked_List.test_Front_Write(); }
} testDescription_testSingle_Linked_List_test_Front_Write;

static class TestDescription_testSingle_Linked_List_test_Back_Empty : public CxxTest::RealTestDescription {
public:
 TestDescription_testSingle_Linked_List_test_Back_Empty() : CxxTest::RealTestDescription( Tests_testSingle_Linked_List, suiteDescription_testSingle_Linked_List, 285, "test_Back_Empty" ) {}
 void runTest() { suite_testSingle_Linked_List.test_Back_Empty(); }
} testDescription_testSingle_Linked_List_test_Back_Empty;

static class TestDescription_testSingle_Linked_List_test_Back_Populated : public CxxTest::RealTestDescription {
public:
 TestDescription_testSingle_Linked_List_test_Back_Populated() : CxxTest::RealTestDescription( Tests_testSingle_Linked_List, suiteDescription_testSingle_Linked_List, 297, "test_Back_Populated" ) {}
 void runTest() { suite_testSingle_Linked_List.test_Back_Populated(); }
} testDescription_testSingle_Linked_List_test_Back_Populated;

static class TestDescription_testSingle_Linked_List_test_Back_Write : public CxxTest::RealTestDescription {
public:
 TestDescription_testSingle_Linked_List_test_Back_Write() : CxxTest::RealTestDescription( Tests_testSingle_Linked_List, suiteDescription_testSingle_Linked_List, 315, "test_Back_Write" ) {}
 void runTest() { suite_testSingle_Linked_List.test_Back_Write(); }
} testDescription_testSingle_Linked_List_test_Back_Write;

static class TestDescription_testSingle_Linked_List_test_Size_Populated : public CxxTest::RealTestDescription {
public:
 TestDescription_testSingle_Linked_List_test_Size_Populated() : CxxTest::RealTestDescription( Tests_testSingle_Linked_List, suiteDescription_testSingle_Linked_List, 334, "test_Size_Populated" ) {}
 void runTest() { suite_testSingle_Linked_List.test_Size_Populated(); }
} testDescription_testSingle_Linked_List_test_Size_Populated;

static class TestDescription_testSingle_Linked_List_test_Insert_Empty : public CxxTest::RealTestDescription {
public:
 TestDescription_testSingle_Linked_List_test_Insert_Empty() : CxxTest::RealTestDescription( Tests_testSingle_Linked_List, suiteDescription_testSingle_Linked_List, 349, "test_Insert_Empty" ) {}
 void runTest() { suite_testSingle_Linked_List.test_Insert_Empty(); }
} testDescription_testSingle_Linked_List_test_Insert_Empty;

static class TestDescription_testSingle_Linked_List_test_InsertConstGet_Empty : public CxxTest::RealTestDescription {
public:
 TestDescription_testSingle_Linked_List_test_InsertConstGet_Empty() : CxxTest::RealTestDescription( Tests_testSingle_Linked_List, suiteDescription_testSingle_Linked_List, 367, "test_InsertConstGet_Empty" ) {}
 void runTest() { suite_testSingle_Linked_List.test_InsertConstGet_Empty(); }
} testDescription_testSingle_Linked_List_test_InsertConstGet_Empty;

static class TestDescription_testSingle_Linked_List_test_Insert_Middle : public CxxTest::RealTestDescription {
public:
 TestDescription_testSingle_Linked_List_test_Insert_Middle() : CxxTest::RealTestDescription( Tests_testSingle_Linked_List, suiteDescription_testSingle_Linked_List, 385, "test_Insert_Middle" ) {}
 void runTest() { suite_testSingle_Linked_List.test_Insert_Middle(); }
} testDescription_testSingle_Linked_List_test_Insert_Middle;

static class TestDescription_testSingle_Linked_List_test_Insert_OutOfBounds : public CxxTest::RealTestDescription {
public:
 TestDescription_testSingle_Linked_List_test_Insert_OutOfBounds() : CxxTest::RealTestDescription( Tests_testSingle_Linked_List, suiteDescription_testSingle_Linked_List, 408, "test_Insert_OutOfBounds" ) {}
 void runTest() { suite_testSingle_Linked_List.test_Insert_OutOfBounds(); }
} testDescription_testSingle_Linked_List_test_Insert_OutOfBounds;

static class TestDescription_testSingle_Linked_List_test_Get_OutOfBounds : public CxxTest::RealTestDescription {
public:
 TestDescription_testSingle_Linked_List_test_Get_OutOfBounds() : CxxTest::RealTestDescription( Tests_testSingle_Linked_List, suiteDescription_testSingle_Linked_List, 432, "test_Get_OutOfBounds" ) {}
 void runTest() { suite_testSingle_Linked_List.test_Get_OutOfBounds(); }
} testDescription_testSingle_Linked_List_test_Get_OutOfBounds;

static class TestDescription_testSingle_Linked_List_test_remove_Populated : public CxxTest::RealTestDescription {
public:
 TestDescription_testSingle_Linked_List_test_remove_Populated() : CxxTest::RealTestDescription( Tests_testSingle_Linked_List, suiteDescription_testSingle_Linked_List, 443, "test_remove_Populated" ) {}
 void runTest() { suite_testSingle_Linked_List.test_remove_Populated(); }
} testDescription_testSingle_Linked_List_test_remove_Populated;

static class TestDescription_testSingle_Linked_List_test_remove_Last : public CxxTest::RealTestDescription {
public:
 TestDescription_testSingle_Linked_List_test_remove_Last() : CxxTest::RealTestDescription( Tests_testSingle_Linked_List, suiteDescription_testSingle_Linked_List, 473, "test_remove_Last" ) {}
 void runTest() { suite_testSingle_Linked_List.test_remove_Last(); }
} testDescription_testSingle_Linked_List_test_remove_Last;

static class TestDescription_testSingle_Linked_List_test_remove_Empty : public CxxTest::RealTestDescription {
public:
 TestDescription_testSingle_Linked_List_test_remove_Empty() : CxxTest::RealTestDescription( Tests_testSingle_Linked_List, suiteDescription_testSingle_Linked_List, 504, "test_remove_Empty" ) {}
 void runTest() { suite_testSingle_Linked_List.test_remove_Empty(); }
} testDescription_testSingle_Linked_List_test_remove_Empty;

static class TestDescription_testSingle_Linked_List_test_find_Empty : public CxxTest::RealTestDescription {
public:
 TestDescription_testSingle_Linked_List_test_find_Empty() : CxxTest::RealTestDescription( Tests_testSingle_Linked_List, suiteDescription_testSingle_Linked_List, 516, "test_find_Empty" ) {}
 void runTest() { suite_testSingle_Linked_List.test_find_Empty(); }
} testDescription_testSingle_Linked_List_test_find_Empty;

static class TestDescription_testSingle_Linked_List_test_find_OutOfBounds : public CxxTest::RealTestDescription {
public:
 TestDescription_testSingle_Linked_List_test_find_OutOfBounds() : CxxTest::RealTestDescription( Tests_testSingle_Linked_List, suiteDescription_testSingle_Linked_List, 530, "test_find_OutOfBounds" ) {}
 void runTest() { suite_testSingle_Linked_List.test_find_OutOfBounds(); }
} testDescription_testSingle_Linked_List_test_find_OutOfBounds;

static class TestDescription_testSingle_Linked_List_test_remove_populated : public CxxTest::RealTestDescription {
public:
 TestDescription_testSingle_Linked_List_test_remove_populated() : CxxTest::RealTestDescription( Tests_testSingle_Linked_List, suiteDescription_testSingle_Linked_List, 549, "test_remove_populated" ) {}
 void runTest() { suite_testSingle_Linked_List.test_remove_populated(); }
} testDescription_testSingle_Linked_List_test_remove_populated;

#include <cxxtest/Root.cpp>
