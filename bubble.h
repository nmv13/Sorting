/*********************************
 * bubble.h
 ********************************/

#ifndef BUBBLE_H
#define BUBBLE_H
#include <iostream>
#include "sort.h"
using namespace std;

class Bubble : public Sort
{
	public:
		void bubble(int arr[], int size);
		Bubble(int arr[], int size)
		{
			x = new int[size];
			createArray(arr, size);
			bubble(x, size);
		}
		~Bubble()
		{
			delete [] x;
			x = NULL;
		}
};

#endif /* bubble_h */