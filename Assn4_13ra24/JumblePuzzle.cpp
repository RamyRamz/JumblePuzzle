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

	jumble = new char*[len]

	for (int i = 0; i < len; i++)
		jumble[i] = new char[len]
}

	const char* letters = "abcdefghijklmnopqrstuvwxyz";

	srand(time(NULL));

	for (int i = 0; i < len; i++)
		for (int j = 0; i < len; j++)
			jumble[i][j] = (char) letters[rand() % 25]

	row = rand() % len;
	col = rand() % len;

	jumble[row][col] = toHide.at(0)

JumblePuzzle::~JumblePuzzle() {
	// TODO Auto-generated destructor stub
}


BadJumbleException::BadJumbleException(const string& e) : message(e){ }
string& BadJumbleException::what() const { return message; }
