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

#ifndef testSingle_Linked_List_H
#define	testSingle_Linked_List_H

#include "Single_Linked_List.h"

#include <cxxtest/TestSuite.h>
//Include your classes header file(s) below and uncomment.
//#include "myClass.h"

class testSingle_Linked_List: public CxxTest::TestSuite {
public:

	//All tests should start with the word 'test' followed by
	//the name of the function being tested.

	/**
	 * Tests push_front(VALUE) on an empty LinkedList
	 */
	void test_PushFront_Empty() {
		Single_Linked_List<int> *list = new Single_Linked_List<int>();
		int exp_size = 1;
		int test = 5;
		list->push_front(5);
		int front = list->front();

		TS_ASSERT_EQUALS(front, test);
		// Makes sure the size was changed too
		TS_ASSERT_EQUALS(exp_size, list->size());
	}

	/**
	 * Tests push_front(VALUE) on an empty LinkedList
	 */
	void test_PushFrontConst_Empty() {
		Single_Linked_List<int> *list2 = new Single_Linked_List<int>();
		const Single_Linked_List<int> *list = list2;

		int exp_size = 1;
		int test = 5;
		list2->push_front(5);
		int front = list->front();

		TS_ASSERT_EQUALS(front, test);
		// Makes sure the size was changed too
		TS_ASSERT_EQUALS(exp_size, list->size());
	}

	/**
	 * Tests push_front(VALUE) on a populated LinkedList
	 */
	void test_PushFront_Populated() {
		Single_Linked_List<int> *list = new Single_Linked_List<int>();
		int exp_size = 4;
		int test = 4;
		list->push_front(1);
		list->push_front(2);
		list->push_front(3);
		list->push_front(test);
		int front = list->front();

		TS_ASSERT_EQUALS(test, front);
		// Makes sure the size was changed too
		TS_ASSERT_EQUALS(exp_size, list->size());
	}

	/**
	 * Tests push_back(VALUE) on Empty LinkedList
	 */
	void test_PushBack_Empty() {
		Single_Linked_List<int> *list = new Single_Linked_List<int>();
		int exp_size = 1;
		int test = 5;
		list->push_back(5);
		int back = list->back();

		TS_ASSERT_EQUALS(back, test);
		// Makes sure the size was changed too
		TS_ASSERT_EQUALS(exp_size, list->size());
	}

	/**
	 * Tests push_back(VALUE) on Empty LinkedList
	 */
	void test_PushBackConst_Empty() {
		Single_Linked_List<int> *list2 = new Single_Linked_List<int>();
		const Single_Linked_List<int> *list = list2;
		int exp_size = 1;
		int test = 5;
		list2->push_back(5);
		int back = list->back();

		TS_ASSERT_EQUALS(back, test);
		// Makes sure the size was changed too
		TS_ASSERT_EQUALS(exp_size, list->size());
	}

	/**
	 * Tests push_back(VALUE) on populated LinkedList
	 */
	void test_PushBack_Populated() {
		Single_Linked_List<int> *list = new Single_Linked_List<int>();
		int exp_size = 4;
		int test = 4;
		list->push_back(1);
		list->push_back(2);
		list->push_back(3);
		list->push_back(test);
		int back = list->back();

		TS_ASSERT_EQUALS(test, back);
		// Makes sure the size was changed too
		TS_ASSERT_EQUALS(exp_size, list->size());
	}

	/**
	 * Tests pop_front() on an empty LinkedList
	 */
	void test_PopFront_Empty() {
		Single_Linked_List<int> *list = new Single_Linked_List<int>();
		int exp_size = 0;

		list->pop_front();

		TS_ASSERT_EQUALS(exp_size, list->size());
		TS_ASSERT_THROWS(list->front(), std::out_of_range);
	}

	/**
	 * Tests pop_front() on a LinkedList with only one element resulting in NULL elements or size 0
	 */
	void test_PopFront_ToNULL() {
		Single_Linked_List<int> *list = new Single_Linked_List<int>();
		int exp_size = 0;

		list->push_front(1);

		list->pop_front();

		TS_ASSERT_EQUALS(exp_size, list->size());
		TS_ASSERT_THROWS(list->front(), std::out_of_range);
	}

	/**
	 * Tests pop_front() on a populated LinkedList
	 */
	void test_PopFront_Populated() {
		Single_Linked_List<int> *list = new Single_Linked_List<int>();
		int exp_size = 4;
		int exp_val = 4;

		list->push_front(1);
		list->push_front(2);
		list->push_front(3);
		list->push_front(4);
		list->push_front(5);

		list->pop_front();

		int val = list->front();

		TS_ASSERT_EQUALS(exp_val, val);
		// Makes sure the size was changed too
		TS_ASSERT_EQUALS(exp_size, list->size());
	}

	/**
	 * Tests pop_back() on Empty LinkedList
	 */
	void test_PopBack_Empty() {
		Single_Linked_List<int> *list = new Single_Linked_List<int>();
		int exp_size = 0;

		list->pop_back();

		TS_ASSERT_EQUALS(exp_size, list->size());
		TS_ASSERT_THROWS(list->get(0), std::out_of_range);
	}

	/**
	 * Tests pop_back() on a LinkedList with one element resulting in NULL elements or size 0
	 */
	void test_PopBack_ToNULL() {
		Single_Linked_List<int> *list = new Single_Linked_List<int>();
		int exp_size = 0;

		list->push_back(1);

		list->pop_back();

		// Makes sure the size was changed too
		TS_ASSERT_EQUALS(exp_size, list->size());
		TS_ASSERT_THROWS(list->get(0), std::out_of_range);
	}

	/**
	 * Tests pop_back() on populated LinkedList
	 */
	void test_PopBack_Populated() {
		Single_Linked_List<int> *list = new Single_Linked_List<int>();
		int exp_size = 4;
		int exp_val = 4;

		list->push_back(1);
		list->push_back(2);
		list->push_back(3);
		list->push_back(4);
		list->push_back(5);

		list->pop_back();

		int val = list->back();

		TS_ASSERT_EQUALS(exp_val, val);
		// Makes sure the size was changed too
		TS_ASSERT_EQUALS(exp_size, list->size());
	}

	/**
	 * Tests the front() method on empty LinkedList.
	 */
	void test_Front_Empty() {
		Single_Linked_List<int> *list = new Single_Linked_List<int>();
		int exp_size = 0;

		TS_ASSERT_EQUALS(exp_size, list->size());
		TS_ASSERT_THROWS(list->front(), std::out_of_range);
	}

	/**
	 * Tests the front() method on a populated LinkedList.
	 * However, this is already tested when doing push_front()
	 */
	void test_Front_Populated() {
		Single_Linked_List<int> *list = new Single_Linked_List<int>();
		int exp_size = 4;
		int exp_front = 4;
		list->push_back(1);
		list->push_back(2);
		list->push_back(3);
		list->push_front(exp_front);
		int front = list->front();

		TS_ASSERT_EQUALS(exp_front, front);
		// Makes sure the size was changed too
		TS_ASSERT_EQUALS(exp_size, list->size());
	}

	/**
	 * Tests the writing the front value with front() method on a populated LinkedList.
	 */
	void test_Front_Write() {
		Single_Linked_List<int> *list = new Single_Linked_List<int>();
		int exp_size = 4;
		int exp_front = 10;
		list->push_front(1);
		list->push_front(2);
		list->push_front(3);
		list->push_front(4);

		list->front() = 10;

		int front = list->front();

		TS_ASSERT_EQUALS(exp_front, front);
		// Makes sure the size was changed too
		TS_ASSERT_EQUALS(exp_size, list->size());
	}

	/**
	 * Tests the back() method on empty LinkedList.
	 */
	void test_Back_Empty() {
		Single_Linked_List<int> *list = new Single_Linked_List<int>();
		int exp_size = 0;

		TS_ASSERT_EQUALS(exp_size, list->size());
		TS_ASSERT_THROWS(list->back(), std::out_of_range);
	}

	/**
	 * Tests the back() method on a populated LinkedList.
	 * However, this is already tested when doing push_front()
	 */
	void test_Back_Populated() {
		Single_Linked_List<int> *list = new Single_Linked_List<int>();
		int exp_size = 4;
		int exp_back = 4;
		list->push_back(1);
		list->push_back(2);
		list->push_back(3);
		list->push_back(exp_back);
		int back = list->back();

		TS_ASSERT_EQUALS(exp_back, back);
		// Makes sure the size was changed too
		TS_ASSERT_EQUALS(exp_size, list->size());
	}

	/**
	 * Tests writing the front with the back() method on a populated LinkedList.
	 */
	void test_Back_Write() {
		Single_Linked_List<int> *list = new Single_Linked_List<int>();
		int exp_size = 4;
		int exp_back = 10;
		list->push_back(1);
		list->push_back(2);
		list->push_back(3);
		list->push_back(4);

		list->back() = 10;

		int back = list->back();

		TS_ASSERT_EQUALS(exp_back, back);
		// Makes sure the size was changed too
		TS_ASSERT_EQUALS(exp_size, list->size());
	}

	// Shows the test but is also tested whenever something is added to the list in the other tests
	void test_Size_Populated() {
		Single_Linked_List<int> *list = new Single_Linked_List<int>();
		int exp_size = 4;
		list->push_front(1);
		list->push_front(2);
		list->push_front(3);
		list->push_front(4);

		TS_ASSERT_EQUALS(exp_size, list->size());
	}

	/**
	 * Tests insert(INDEX, VALUE) on empty list
	 * Also tests get(INDEX)
	 */
	void test_Insert_Empty() {
		Single_Linked_List<int> *list = new Single_Linked_List<int>();
		int exp_size = 1;
		int exp_val = 1;

		list->insert(0, 1);

		int val = list->get(0);

		TS_ASSERT_EQUALS(exp_val, val);
		// Makes sure the size was changed too
		TS_ASSERT_EQUALS(exp_size, list->size());
	}

	/**
	 * Tests insert(INDEX, VALUE) on empty list
	 * Also tests get(INDEX)
	 */
	void test_InsertConstGet_Empty() {
		Single_Linked_List<int> *list2 = new Single_Linked_List<int>();
		const Single_Linked_List<int> *list = list2;
		int exp_size = 1;
		int exp_val = 1;

		list2->insert(0, 1);

		int val = list->get(0);

		TS_ASSERT_EQUALS(exp_val, val);
		// Makes sure the size was changed too
		TS_ASSERT_EQUALS(exp_size, list->size());
	}

	/**
	 * Tests insert(INDEX, VALUE) in the middle on populated list
	 */
	void test_Insert_Middle() {
		Single_Linked_List<int> *list = new Single_Linked_List<int>();
		int exp_size = 5;
		int exp_val = 10;

		list->push_front(1);
		list->push_front(2);
		list->push_front(3);
		list->push_front(4);

		list->insert(2, 10);

		int val = list->get(2);

		TS_ASSERT_EQUALS(exp_val, val);
		// Makes sure the size was changed too
		TS_ASSERT_EQUALS(exp_size, list->size());
	}

	/**
	 * Tests insert(INDEX, VALUE) PAST the end of a populated list
	 * Should put the element on the end of the list if out of bounds
	 */
	void test_Insert_OutOfBounds() {
		Single_Linked_List<int> *list = new Single_Linked_List<int>();
		int exp_size = 5;
		int exp_val = 5;

		list->push_front(1);
		list->push_front(2);
		list->push_front(3);
		list->push_front(4);

		// Out of bounds - indexes 4 through 9 do not exist
		list->insert(10, 5);

		int val = list->get(4);

		TS_ASSERT_EQUALS(exp_val, val);
		// Makes sure the size was changed too
		TS_ASSERT_EQUALS(exp_size, list->size());
	}

	/**
	 * Tests get(INDEX) PAST the end of a LinkedList
	 * Should return NULL
	 */
	void test_Get_OutOfBounds() {
		Single_Linked_List<int> *list = new Single_Linked_List<int>();
		int exp_size = 0;

		TS_ASSERT_EQUALS(exp_size, list->size());
		TS_ASSERT_THROWS(list->get(0), std::out_of_range);
	}

	/**
	 * Tests remove(INDEX) for a populated list and tests if the elements moved properly
	 */
	void test_remove_Populated() {
		Single_Linked_List<int> *list = new Single_Linked_List<int>();
		int exp_size = 3;

		int itemZero = 1;
		int itemOne = 2;
		int itemTwo = 3;
		int itemThree = 4;

		bool exp_val = true;

		list->push_front(itemZero);
		list->push_front(itemOne);
		list->push_front(itemTwo);
		list->push_front(itemThree);

		bool val = list->remove(1);  // remove value 2 / itemOne

		TS_ASSERT_EQUALS(exp_val, val);
		TS_ASSERT_EQUALS(list->get(0), itemThree);
		// Since itemOne was removed ..
		TS_ASSERT_EQUALS(list->get(1), itemOne);
		TS_ASSERT_EQUALS(list->get(2), itemZero);
		// test size
		TS_ASSERT_EQUALS(exp_size, list->size());

	}
	/**
	 * Tests remove(INDEX) when the index is the last in-bounds index
	 */
	void test_remove_Last() {
		Single_Linked_List<int> *list = new Single_Linked_List<int>();
		int exp_size = 3;

		int itemZero = 1;
		int itemOne = 2;
		int itemTwo = 3;
		int itemThree = 4;

		bool exp_val = true;

		list->push_front(itemZero);
		list->push_front(itemOne);
		list->push_front(itemTwo);
		list->push_front(itemThree);

		bool val = list->remove(3);

		TS_ASSERT_EQUALS(exp_val, val);
		TS_ASSERT_EQUALS(list->get(0), itemThree);
		TS_ASSERT_EQUALS(list->get(1), itemTwo);
		TS_ASSERT_EQUALS(list->get(2), itemOne);
		TS_ASSERT_THROWS(list->get(3), std::out_of_range);

		// test size
		TS_ASSERT_EQUALS(exp_size, list->size());
	}

	/**
	 * Tests remove(INDEX) when the LinkedList is empty or the INDEX is out of bounds
	 */
	void test_remove_Empty() {
		Single_Linked_List<int> *list = new Single_Linked_List<int>();

		bool exp_val = false;
		bool val = list->remove(0);

		TS_ASSERT_EQUALS(exp_val, val);
	}

	/**
	 * Tests find(INDEX) when the LinkedList is empty
	 */
	void test_find_Empty() {
		Single_Linked_List<int> *list = new Single_Linked_List<int>();

		int findable = 5;

		int exp_val = 0;
		int val = list->find(findable);

		TS_ASSERT_EQUALS(exp_val, val);
	}

	/**
	 * Tests find(INDEX) when the INDEX is out of bounds
	 */
	void test_find_OutOfBounds() {
		Single_Linked_List<int> *list = new Single_Linked_List<int>();

		int findable = 5;

		list->push_front(1);
		list->push_front(2);
		list->push_front(3);
		list->push_front(4);

		int exp_val = 4; // size of the LinkedList
		int val = list->find(findable);

		TS_ASSERT_EQUALS(exp_val, val);
	}

	/**
		 * Tests find(INDEX) when the LinkedList is populated
		 */
		void test_remove_populated() {
			Single_Linked_List<int> *list = new Single_Linked_List<int>();

			int findable = 5;

			list->push_front(1);
			list->push_front(2);
			list->push_front(3);
			list->push_front(4);
			list->push_front(5);
			list->push_front(6);

			int exp_val = 1; // Index of the value 5
			int val = list->find(findable);

			TS_ASSERT_EQUALS(exp_val, val);
		}

	// Test CONST values or NONCONST .. no idea what isnt running

};
#endif	/* %<%GUARD_NAME%>% */
