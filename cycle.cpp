/********************************************************************
* cycle.cpp
********************************************************************/
#include "sort.h"
#include "cycle.h"
#include <iostream>

using namespace std;

/********************************************************************
* Cycle Sort (Only works with an array of no duplicates or skips)
********************************************************************/
void Cycle :: cycle(int arr[], int size)
{
	cout << "Cycle Sort\n\n";

	arrayDisplay(arr, size);
	int i = 1;

	// Have the index value equal the value index of the array, if 
	// they don't match, swap them with the value index.
	while (i)
	{
		if (arr[i] == arr[arr[i] - 1])
		{
			i++;
		}
		else
		{
			swap(&arr[i], &arr[arr[i] - 1]);
			arrayDisplay(arr, size);
		}

		if ((i) >= size)
		{
			i = 0;
		}
		loops++;
	}
	loopDisplay();
}