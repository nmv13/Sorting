/********************************************************************
* cocktail.cpp
********************************************************************/
#include "sort.h"
#include "cocktail.h"
#include <iostream>

using namespace std;

/********************************************************************
* Cocktail Sort
********************************************************************/
void Cocktail :: cocktail(int arr[], int size)
{
	cout << "Cocktail Sort\n\n";

	arrayDisplay(arr, size);

	bool done;

	while (!done)
	{
		done = true;
		// Sift through starting from the left side, shift numbers left
		// if less than number to right.
		for (int i = 0; i < size - 1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				swap(&arr[i], &arr[i + 1]);
				done = false;
			}
			loops++;
		}

		// Sift through starting from the right side, shift numbers right 
		// of greater than number to left.
		for (int j = size - 1; j > 0; j--)
		{
			if (arr[j - 1] > arr[j])
			{
				swap(&arr[j - 1], &arr[j]);
				done = false;
			}
			loops++;
		}
		arrayDisplay(arr, size);
	}
	loopDisplay();
}