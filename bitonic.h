/*********************************
 * bitonic.h
 ********************************/

#ifndef BITONIC_H
#define BITONIC_H
#include <iostream>
#include "sort.h"
using namespace std;

class Bitonic : public Sort
{
	public:
		void bitonic(int arr[], int size);
		Bitonic(int arr[], int size)
		{
			x = new int[size];
			createArray(arr, size);
			bitonic(x, size);
		}
		~Bitonic()
		{
			delete [] x;
			x = NULL;
		}
};

#endif /* bitonic_h */