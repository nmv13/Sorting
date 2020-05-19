/********************************************************************
* bubble.cpp
********************************************************************/
#include "sort.h"
#include "bubble.h"
#include <iostream>

using namespace std;

/********************************************************************
* Bubble Sort
********************************************************************/
void Bubble :: bubble(int arr[], int size)
{
	cout << "Bubble Sort\n\n";

	// Sift through array and swap number to the right if it is less
	// than number to the left.
	int count = 0;   // counter to judge if array is fully sorted
	while (count < size)
	{	
		arrayDisplay(arr, size); loops++;
		for (int i = 0; i < (size - 1); i++)
		{
			if (arr[i] > arr[i + 1])
			{
				swap(&arr[i], &arr[i + 1]);
				count = 0;
			}
			count++;
		}
	}
	loopDisplay();
}