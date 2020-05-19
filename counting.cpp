/********************************************************************
* counting.cpp
********************************************************************/
#include "sort.h"
#include "counting.h"
#include <iostream>

using namespace std;

/********************************************************************
* Counting Sort : Needs bug fixes
********************************************************************/
void Counting :: counting(int arr[], int size)
{
	cout << "Counting Sort\n\n";

	arrayDisplay(arr, size);

	// Find highest value in array and base all future arrays on it's size
	int max = 0;
	for (int z = 0; z < size; z++)
	{
		if (arr[z] > max)
			max = arr[z];
	}

	// Replace size if needed
	if (max > size)
		size = max - 1;

	// Create a new array with the same size
	int arr2[size];

	// Populate new array with each index for display purposes
	for (int i = 0; i <= size; i++)
	{
		arr2[i] = i;
	}
	arrayDisplay(arr2, size);

	// Populate new array with zeros.
	for (int i = 0; i <= size; i++)
	{
		arr2[i] = 0;
	}

	// // Fill array with total for each number in origonal array according
	// // to it's slot in the array i.e. arr {1,(4),3,5,(4)} -> arr2[4] = 2.
	for (int j = 0; j < size; j++)
	{
		arr2[arr[j]] += 1; loops++;
	}
	arrayDisplay(arr2, size);

	// Add all numbers up in arr2 going from left to right.
	// Create another array to hold totals
	int arrTot[size];
	int tot = 0;
	for (int k = 0; k < size; k++)
	{
		tot += arr2[k];
		arrTot[k] = tot; loops++;
	}
	arrayDisplay(arrTot, size);
	
	// Create a third array for the sorted answer
	int arr3[size];

	// Populate new array with zeros.
	for (int i = 0; i <= size; i++)
	{
		arr3[i] = 0;
	}
	
	// Go back through first array, where that number is found as
	// an index in the second array, take that index value and use
	// it as the index to store the origonal number in the third array.
	// i.e store "4" in the second slot of the answer array starting
	// from 0 -> 1,3,(4),4,5
	for (int l = 0; l < size; l++)
	{
		arr3[arrTot[arr[l]]-1] = arr[l];   // Got "-1" from Geeks for Geeks
		--arrTot[arr[l]];                  // Got "--" before index from GfG
		loops++;
	} 

	// Sort through array to remove zeros
	int arrAns[size];
	int index = 0;
	for (int x = 0; x < size; x++)
	{
		if (arr3[x] > 0)
		{
			arrAns[index] = arr3[x];
			index++;
		}
		loops++;
	}

	arrayDisplay(arrAns, index - 1);
	loopDisplay();
}