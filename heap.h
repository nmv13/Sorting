/*********************************
 * heap.h
 ********************************/

#ifndef HEAP_H
#define HEAP_H
#include <iostream>
#include "sort.h"
using namespace std;

class Heap : public Sort
{
	public:
		void heap(int arr[], int size);
		Heap(int arr[], int size)
		{
			x = new int[size];
			createArray(arr, size);
			heap(x, size);
		}
		~Heap()
		{
			delete [] x;
			x = NULL;
		}
};

#endif /* heap_h */