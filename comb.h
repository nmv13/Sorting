/*********************************
 * comb.h
 ********************************/

#ifndef COMB_H
#define COMB_H
#include <iostream>
#include "sort.h"
using namespace std;

class Comb : public Sort
{
	public:
		void comb(int arr[], int size);
		Comb(int arr[], int size)
		{
			x = new int[size];
			createArray(arr, size);
			comb(x, size);
		}
		~Comb()
		{
			delete [] x;
			x = NULL;
		}
};

#endif /* comb_h */
