/*********************************
 * cycle.h
 ********************************/

#ifndef CYCLE_H
#define CYCLE_H
#include <iostream>
#include "sort.h"
using namespace std;

class Cycle : public Sort
{
	public:
		void cycle(int arr[], int size);
		Cycle(int arr[], int size)
		{
			x = new int[size];
			createArray(arr, size);
			cycle(x, size);
		}
		~Cycle()
		{
			delete [] x;
			x = NULL;
		}
};

#endif /* cycle_h */