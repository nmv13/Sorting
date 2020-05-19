/*********************************
 * counting.h
 ********************************/

#ifndef COUNTING_H
#define COUNTING_H
#include <iostream>
#include "sort.h"
using namespace std;

class Counting : public Sort
{
	public:
		void counting(int arr[], int size);
		Counting(int arr[], int size)
		{
			x = new int[size];
			createArray(arr, size);
			counting(x, size);
		}
		~Counting()
		{
			delete [] x;
			x = NULL;
		}
};

#endif /* counting_h */