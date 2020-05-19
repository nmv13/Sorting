/********************************************************************
* gnome.cpp
********************************************************************/
#include "sort.h"
#include "gnome.h"
#include <iostream>

using namespace std;

/********************************************************************
* Gnome Sort
********************************************************************/
void Gnome :: gnome(int arr[], int size)
{
	cout << "Gnome Sort\n\n";

	arrayDisplay(arr, size);

	// Sort through array
	int i = 0;
	while (i < size)
	{
		// If the index is larger than the one to the left, keep going
		// If the index is smaller, swap them and go back one index
		if (i + 1 <= size && arr[i] > arr[i + 1])
		{
			swap(&arr[i], &arr[i + 1]);
			arrayDisplay(arr, size);
			if (i > 0)
				i--;
		}
		else
			i++;
		loops++;
	}
	loopDisplay();
}