/*********************************
 * insertion.h
 ********************************/

#ifndef INSERTION_H
#define INSERTION_H
#include <iostream>
#include "sort.h"
using namespace std;

class Insertion : public Sort
{
	public:
		void insertion(int arr[], int size);
		Insertion(int arr[], int size)
		{
			x = new int[size];
			createArray(arr, size);
			insertion(x, size);
		}
		~Insertion()
		{
			delete [] x;
			x = NULL;
		}
};

#endif /* insertion_h */