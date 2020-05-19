/*********************************
 * quick.h
 ********************************/

#ifndef QUICK_H
#define QUICK_H
#include <iostream>
#include "sort.h"
using namespace std;

class Quick : public Sort
{
	public:
		void quick(int arr[], int size);
		Quick(int arr[], int size)
		{
			x = new int[size];
			createArray(arr, size);
			quick(x, size);
		}
		~Quick()
		{
			delete [] x;
			x = NULL;
		}
};

#endif /* quick_h */