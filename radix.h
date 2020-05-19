/*********************************
 * radix.h
 ********************************/

#ifndef RADIX_H
#define RADIX_H
#include <iostream>
#include "sort.h"
using namespace std;

class Radix : public Sort
{
	public:
		void radix(int arr[], int size);
		Radix(int arr[], int size)
		{
			x = new int[size];
			createArray(arr, size);
			radix(x, size);
		}
		~Radix()
		{
			delete [] x;
			x = NULL;
		}
};

#endif /* radix_h */