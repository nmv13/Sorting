/*********************************
 * sort.h
 ********************************/

#ifndef SORT_H
#define SORT_H
#include <iostream>
using namespace std;

class Sort
{
	protected:
		int loops;
		int swaps;
		int * x;

	public:
		Sort()
		{
			loops = 0;
			swaps = 0;
		}
		void loopDisplay();
		void arrayDisplay(int arr[], int size);
		void swap(int * a, int * b);
		void createArray(int arr[], int size);
};

#endif /* sort_h */