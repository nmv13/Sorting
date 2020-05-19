/********************************************************************
* insertion.cpp
********************************************************************/
#include "sort.h"
#include "insertion.h"
#include <iostream>

using namespace std;

/********************************************************************
* Insertion Sort 
********************************************************************/
void Insertion :: insertion(int arr[], int size)
{
	cout << "Insertion Sort\n\n";

	arrayDisplay(arr, size);

	// Start with the second element in the array, see if that element
	// is less than the element to the left, if so, swap those two 
	// and check again with the element to the left of the previous
	int index;
	int ph;

	for (int i = 1; i < size; i++)
	{
		if (arr[i] < arr[i - 1] && i >= 1)
		{
			ph = i;
			while (arr[i] < arr[i - 1] && i >= 1)
			{
				swap(&arr[i], &arr[i - 1]);
				i--;
			}
			i = ph;
			arrayDisplay(arr, size);
		}
		loops++;
	}
	loopDisplay();
}