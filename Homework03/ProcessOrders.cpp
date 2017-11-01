/*
 * ProcessOrders.cpp
 *
 *  Created on: Oct 21, 2017
 *      Author: TomWR
 */

#include <stack>
#include <iostream>
#include "Inventory.h"
#include "Order.h"

#include "ProcessOrders.h"

using namespace std;

/** Process new Shipment
 @param q Quantity of widgets in shipment
 @param c Cost of the widgets in shipment
 Also process any un-filled orders in the orders_to_be_filled stack
 @return total amount that were processed from orders_to_be_filled stack
 */
double ProcessOrders::process_shipment(int q, double c) { // process shipments arrive; return total shipment
	double markup = 1.5; //precent markup
	int num_of_orders_filled = 0; // initialize

	if (orders_to_be_filled.size() == 0) {
		Inventory inv(q, c * markup);
		Inventory_on_hand.push(inv);
		cout << endl << "putting inventory on hand" << endl;
	} else {
		cout << endl << "PROCESSING STACKED ORDERS FROM NEW INVENTORY" << endl;

		Inventory *inv = new Inventory(q, c); // make new inventory from the incoming contents
		while (orders_to_be_filled.size() > 0 && inv->get_quantity() > 0) { // While there is still orders some inventory left
			cout << "NEXT ORDER ON STACK PROCCESSING STARTED";

			Order *order = new Order(orders_to_be_filled.top().get_quantity()); // Get the latest order
			orders_to_be_filled.pop();

			top_of_while: while (inv->get_quantity() > 0
					&& order->get_quantity() > 0) {
				cout << endl << "Boxed item";
				int items_needed = order->get_quantity(); // Gets the amount of items needed for order
				order->set_quantity(items_needed - 1); // "puts the item in the box to be shipped"
				inv->set_quantity(inv->get_quantity() - 1); // now there is 1 less item in the inventory
			}
			if (order->get_quantity() == 0 && inv->get_quantity() > 0) { // If all the items for the order were gotten and still more in inventory
				if (orders_to_be_filled.size() == 0) { // If no more orders
					cout << endl << "DONE: Stacking unused inventory";
					Inventory new_inv(inv->get_quantity(), inv->get_cost()); // puts back the unused inventory
					Inventory_on_hand.push(new_inv);
				} else {
					Order *next_order = new Order(
							orders_to_be_filled.top().get_quantity()); // Get the latest order
					orders_to_be_filled.pop();
					order = next_order;
					cout << endl << "DONE: Starting next order on stack";
					goto top_of_while;
					// keep working on orders
				}

				num_of_orders_filled++;

			}
			if (order->get_quantity() > 0 && inv->get_quantity() == 0) { // If the inventory is empty but more is needed for the order
				cout << endl << "DONE: Not enough inventory - stacking order";
				Order new_order(order->get_quantity());
				orders_to_be_filled.push(new_order); // Push the unfinished order onto the stack
			}
			if (order->get_quantity() == 0 && inv->get_quantity() == 0) { // If there is jsut enough in the inventory for the order
				cout << endl
						<< "DONE: zero remaining inventory, zero remaining orders";
				num_of_orders_filled++;
			}

		}
	}

	return num_of_orders_filled;
}
/** Process new Order
 @param q Quantity of widgets in shipment
 @return total amount that were processed from orders_to_be_filled stack
 */
double ProcessOrders::process_order(int q) {               // process orders
	double num_of_orders_filled = 0;
	Order the_order(q);

	if (Inventory_on_hand.empty()) { // If no inventory to fill orders, push the stack
		cout << endl << "Process Order: pushing orders to be filled.";
		orders_to_be_filled.push(the_order); // Put orders on stack
	} else {
		cout << endl << "Process Order: PROCESSING ORDER FROM STACKED INVENTORY"
				<< endl;

		Order *incoming_order = new Order(q); // make new inventory from the incoming contents
		while (Inventory_on_hand.size() > 0
				&& incoming_order->get_quantity() > 0) { // While there is still orders some inventory left
			cout << "Process Order: Started processing order";

			Inventory *inventory = new Inventory(
					Inventory_on_hand.top().get_quantity(),
					Inventory_on_hand.top().get_cost()); // Get the latest order
			orders_to_be_filled.pop();

			top_of_while: while (incoming_order->get_quantity() > 0
					&& inventory->get_quantity() > 0) {
				cout << endl << "Boxed item";
				int items_needed = inventory->get_quantity(); // Gets the amount of items the inventory has
				inventory->set_quantity(items_needed - 1); // takes the items out of the inventory
				incoming_order->set_quantity(
						incoming_order->get_quantity() - 1); // now there is 1 less item to be gotten for the order
			}
			if (inventory->get_quantity() == 0
					&& incoming_order->get_quantity() > 0) { // If there was more on the order but no more inventory
				if (Inventory_on_hand.size() == 0) { // If no more inventory
					cout << endl << "DONE: Stacking remaining order";
					Order new_order(incoming_order->get_quantity()); // updates the order
					orders_to_be_filled.push(new_order);
				} else {
					Inventory *next_inv = new Inventory(
							Inventory_on_hand.top().get_quantity(),
							Inventory_on_hand.top().get_cost()); // Get the next "box" of inventory off stack
					Inventory_on_hand.pop();
					inventory = next_inv;
					cout << endl
							<< "Inventory Empty: Grabbing next inventory on stack";
					goto top_of_while;
					// keep working on orders
				}

				num_of_orders_filled++;

			}
			if (inventory->get_quantity() > 0
					&& incoming_order->get_quantity() == 0) { // If the order is filled but more is in inventory
				cout << endl
						<< "DONE: order filled - stacking smaller inventory";
				Inventory new_inv(inventory->get_quantity(),
						inventory->get_cost());
				Inventory_on_hand.push(new_inv); // Push the smaller inventory onto stack
			}
			if (inventory->get_quantity() == 0
					&& incoming_order->get_quantity() == 0) { // If there is just enough in the inventory for the order
				cout << endl << "DONE: zero remaining inventory, order filled";
				num_of_orders_filled++;
			}

		}
	}

	return num_of_orders_filled;
}

//	void do_shipment_arrived();					// get inputs from user when the shipments arrive
//	void do_order_arrived();					// get inputs from user when the orders arrive

