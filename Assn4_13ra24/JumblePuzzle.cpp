/*
 * JumblePuzzle.cpp
 *
 *  Created on: Nov 8, 2016
 *      Author: ramy
 */

#include "JumblePuzzle.h"
#include<iostream>
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
#include<sstream>
using namespace std;

JumblePuzzle::JumblePuzzle(const string& toHide, const string& diff) {
	len = toHide.length();

	if(len < 3 || len > 18)
		throw BadJumbleException("Length of word cannot be less than 3 or more than 18")

	if (diff == "easy")
		len *= 2;
	else if (diff == "medium")
		len *=3;
	else if(diff == "hard")
		len *= 4;
	else
		throw BadJumbleException("Difficulty must be Easy, Medium, or Hard")
}

JumblePuzzle::~JumblePuzzle() {
	// TODO Auto-generated destructor stub
}


BadJumbleException::BadJumbleException(const string& e) : message(e){ }
string& BadJumbleException::what() const { return message; }
