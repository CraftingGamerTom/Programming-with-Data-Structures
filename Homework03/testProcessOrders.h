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

#ifndef TEST_PROCESS_ORDERS_H
#define	TEST_PROCESS_ORDERS_H

#include <cxxtest/TestSuite.h>

#include <iostream>
#include "ProcessOrders.h"

using namespace std;
//Include your classes header file(s) below and uncomment.
//#include "myClass.h"

/**
 * Disclaimer: Does not test all code possibilities
 */
class testProcessOrders: public CxxTest::TestSuite {
public:

	//All tests should start with the word 'test' followed by
	//the name of the function being tested.

	void testShipment() {
		cout << endl << "RUNNING testShipment";
		ProcessOrders *processor = new ProcessOrders();
		int num_of_items = 5;
		int exp_filled_orders = 0;
		double price = 10.0;

		int processed_item_num = processor->process_shipment(num_of_items,
				price);

		TS_ASSERT_EQUALS(processed_item_num, exp_filled_orders);
		// Tests to see that many items were processed.

	}
	void testShipment_OneOrderLeft() {
		cout << endl << "RUNNING testShipment_OneOrderLeft";
		ProcessOrders *processor = new ProcessOrders();
		int num_of_items = 5; // One Item per shipment
		int exp_filled_orders = 1; // five total shipments of one item
		double price = 10.0;

		int processed_orders_ignore = processor->process_order(1); // Show the return since is empty
		processed_orders_ignore += processor->process_order(5); // Show the return since is empty

		TS_ASSERT_EQUALS(processed_orders_ignore, 0); // Makes sure there were no orders processed.

		int processed_item_num = processor->process_shipment(num_of_items, price);

		TS_ASSERT_EQUALS(processed_item_num, exp_filled_orders); // Makes sure the correct number of orders were filled


		// Now make sure that it worked completely ... Should be one order left
		int check_processes = processor->process_shipment(1, price); //should be one order left with one item

		TS_ASSERT_EQUALS(check_processes, 1); // Makes sure there was one order left to be filled

	}
	void testShipment_NoOrders() {
		cout << endl << "RUNNING testShipment_NoOrders";
		ProcessOrders *processor = new ProcessOrders();
		int num_of_items = 5;
		int exp_filled_orders = 0;
		double price = 10.0;

		int processed_item_num = processor->process_shipment(num_of_items,
				price);

		TS_ASSERT_EQUALS(processed_item_num, exp_filled_orders);
		// Tests to see that many items were processed.

	}

	void testOrder() {
		cout << endl << "RUNNING testOrder";
		ProcessOrders processor;
		int num_of_items = 5;
		double price = 10.0;
		int processed_item_num = processor.process_shipment(num_of_items, price);

		int order_size = 5;
		int exp_orders_done = 1;
		int orders_done = processor.process_order(order_size);

		TS_ASSERT_EQUALS(orders_done, exp_orders_done);
		// Tests to see that many items were processed.
	}

};
#endif	/* %<%GUARD_NAME%>% */
