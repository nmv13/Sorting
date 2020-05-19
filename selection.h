/*********************************
 * selection.h
 ********************************/

#ifndef SELECTION_H
#define SELECTION_H
#include <iostream>
#include "sort.h"
using namespace std;

class Selection : public Sort
{
	public:
		void selection(int arr[], int size);
		Selection(int arr[], int size)
		{
			x = new int[size];
			createArray(arr, size);
			selection(x, size);
		}
		~Selection()
		{
			delete [] x;
			x = NULL;
		}
};

#endif /* selection_h */