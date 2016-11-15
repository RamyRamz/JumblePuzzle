/*
 * JumblePuzzle.h
 *
 *  Created on: Nov 8, 2016
 *      Author: ramy
 */
#include<iostream>
#include<exception>
#include<string>
using namespace std;
typedef char* charArrayPtr;

class JumblePuzzle {
	public:
		JumblePuzzle(const string&, const string&);
		JumblePuzzle(const JumblePuzzle&);
		~JumblePuzzle();
		JumblePuzzle& operator=(const JumblePuzzle&);
		charArrayPtr* getJumble();
		int getSize();
		int getRowPos();
		int getColPos();
		char getDirection();
	private:
		int row;
		int col;
		int len;
		char direction;
		charArrayPtr* matrix;
};

class BadJumbleException {
public:
	BadJumbleException(const string&); //Gives a customized message for File Reading/Writing errors
	string& what() const;
private:
	string message;
};

