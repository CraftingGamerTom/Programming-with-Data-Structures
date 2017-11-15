/*
 * main.cpp
 *
 *  Created on: Oct 21, 2017
 *      Author: TomWR
 */

#include<cstdlib>
#include<string>
#include<iostream>

#include "size.cpp"

int main(int argc , char** argv) {
	int v = size("this is a recursion");
	cout << v << endl;

	reverse("this is recursion");

	return 0;
}



