/*
 * size.cpp
 *
 *  Created on: Oct 21, 2017
 *      Author: TomWR
 */

#include<cstdlib>
#include<string>
#include<iostream>

#include"recursion.h"

using namespace std;
int recursion::size (string s) {
	if(s.length() == 0) {
		return 0;
	}else {
		return 1+ size(s.substr(1));
	}
}

void recursion::reverse(string s) {
	if(s.length() == 0) {
		return;
	}else {
		reverse(s.substr(1));
		cout <<  s.at(0) << endl;
	}
}
