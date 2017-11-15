/*
 * Expression_Tree.cpp
 *
 *  Created on: Oct 30, 2017
 *      Author: TomWR
 */

#include <string>
#include <iosfwd>
#include "Expression_Tree.h"

using namespace std;

void Expression_Tree::read_expression_tree(istream& in) {
	the_tree = the_tree.read_binary_tree(in);
}

int Expression_Tree::evaluate() const {
	// cout << the_tree.to_string() << endl;

	return evaluate(the_tree);

}

int Expression_Tree::evaluate(const Binary_Tree<string>& tree) const {

	cout << tree.get_data() << endl;

	string value = tree.get_data();
	int value_type = 0;
	// Check for number or operator

	// Check for operator
	if (value.compare("*") == 0) {
		value_type = 2;
	} else if (value.compare("/") == 0) {
		value_type = 2;
	} else if (value.compare("+") == 0) {
		value_type = 2;
	} else if (value.compare("-") == 0) {
		value_type = 2;
	}
	//Check for number

	else if ((value.find_first_not_of( "0123456789" ) == string::npos)) {
		value_type = 1;
	}

	cout << "value_type: " << value_type << endl;

	if (value_type == 1) {
		// for converting to int
		string intAsString = value;
		int asInt = 0;

		stringstream ss;
		ss << intAsString;
		ss >> asInt;

		ss.str(""); //clear the stringstream
		ss.clear(); //clear error flags because "42" is not a valid stream (?)
		// end conversion

		// int val = std::stoi(value, nullptr, 10);
		// cout << "val: " << val << endl;
		return asInt; // was "val"
	}
	if (value_type == 2) {

		int l = evaluate(tree.get_left_subtree());
		int r = evaluate(tree.get_right_subtree());
		cout << "left: " << l << endl << "right: " << r << endl;

		if (value.compare("*") == 0) {
			return l * r;
		} else if (value.compare("/") == 0) {
			return l / r;
		} else if (value.compare("+") == 0) {
			return l + r;
		} else if (value.compare("-") == 0) {
			return l - r;
		}
	}
	cout << "shooooot" << endl;
	return 0; // Safety
}

