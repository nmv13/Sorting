/*********************************
 * cocktail.h
 ********************************/

#ifndef COCKTAIL_H
#define COCKTAIL_H
#include <iostream>
#include "sort.h"
using namespace std;

class Cocktail : public Sort
{
	public:
		void cocktail(int arr[], int size);
		Cocktail(int arr[], int size)
		{
			x = new int[size];
			createArray(arr, size);
			cocktail(x, size);
		}
		~Cocktail()
		{
			delete [] x;
			x = NULL;
		}
};

#endif /* cocktail_h */