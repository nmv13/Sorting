/*********************************
 * merge.h
 ********************************/

#ifndef MERGE_H
#define MERGE_H
#include <iostream>
#include "sort.h"
using namespace std;

class Merge : public Sort
{
	public:
		void merge(int arr[], int size);
		Merge(int arr[], int size)
		{
			x = new int[size];
			createArray(arr, size);
			merge(x, size);
		}
		~Merge()
		{
			delete [] x;
			x = NULL;
		}
};

#endif /* merge_h */