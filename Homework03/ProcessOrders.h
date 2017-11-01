/*
 * ProcessOrders.h
 *
 *  Created on: Mar 17, 2013
 *      Author: hloi
 */

#ifndef PROCESSORDERS_H_
#define PROCESSORDERS_H_

#include <stack>
#include "Inventory.h"
#include "Order.h"

class ProcessOrders
{
public:

	/** Process new Shipment
	 @param q Quantity of widgets in shipment
	 @param c Cost of the widgets in shipment
	 Also process any un-filled orders in the orders_to_be_filled stack
	 @return total amount that were processed from orders_to_be_filled stack
	 */
	double process_shipment(int q, double c);  // process shipments arrive; return total shipment
	/** Process new Order
	 @param q Quantity of widgets in shipment
	 @return total amount that were processed from orders_to_be_filled stack
	 */
	double process_order(int q);                // process orders

//	void do_shipment_arrived();					// get inputs from user when the shipments arrive
//	void do_order_arrived();					// get inputs from user when the orders arrive

private:

	std::stack<Inventory> Inventory_on_hand;	// keep track of inventory on hand
	std::stack<Order> orders_to_be_filled;		// keep track of orders

};

#endif /* PROCESSORDERS_H_ */
