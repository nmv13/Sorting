/********************************************************************
* comb.cpp
********************************************************************/
#include "sort.h"
#include "comb.h"
#include <iostream>

using namespace std;

/********************************************************************
* Comb Sort
********************************************************************/
void Comb :: comb(int arr[], int size)
{
	cout << "Comb Sort\n\n";

	arrayDisplay(arr, size);

	bool done = false;
	int index = size / 1.3;
 	
 	// Start with the size of the array and devide by 1.3, the answer
 	// is what the numbers will be sorted by. After a full cycle 
 	// through array, devide by 1.3 again, and contine until vale is 
 	// 1.
	while (!done)
	{
		for (int i = 0; i < size - 1; i++)
		{
			if (arr[i] > arr[i + index] && (i + index) < (size))
			{
				swap(&arr[i], &arr[i + index]);
				done = false;
			}
			loops++;
		}
		if (index == 1)
			done = true;
		index = index / 1.3;
		arrayDisplay(arr, size);
		loops++;
	}
	loopDisplay();
}