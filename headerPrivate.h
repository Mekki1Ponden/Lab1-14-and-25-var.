#pragma once
#include "header.h"

class childQueuePrivate : private mainQueue
{
public:
	float arithmeticMath();
	float arithmeticMath2();
	int pop(); 
	void push(int el); 
	void print(); 
	void merge(childQueuePrivate& quePrivate); 
	void copy(childQueuePrivate& queue); 
	bool isEmpty(); 
};



