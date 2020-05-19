/********************************************************************
* selection.cpp
********************************************************************/
#include "sort.h"
#include "selection.h"
#include <iostream>

using namespace std;

/********************************************************************
* Selection Sort
********************************************************************/
void Selection :: selection(int arr[], int size)
{
	cout << "Selection Sort\n\n";

	arrayDisplay(arr, size);

	// Start with an index of 0, and have that always equal the lowest
	// value in the array after it. Incriment the array as you swap.
	int j = 0;
	int x;
	int index;
	int check = 0;

	while (j < size)
	{
		index = arr[j];
		for (int i = j; i < size; i++)
		{
			if (arr[i] < index)
			{
				index = arr[i];
				x = i;
				check = 1;
			}
			loops++;
		}
		if (check)
		{
			swap(&arr[j], &arr[x]);
			arrayDisplay(arr, size);
			check = 0;
		}
		j++;
	}
	loopDisplay();
}