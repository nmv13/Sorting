/********************************************************************
* merge.cpp
********************************************************************/
#include "sort.h"
#include "merge.h"
#include <iostream>

using namespace std;

/********************************************************************
* Merge Sort
********************************************************************/
void Merge :: merge(int arr[], int size)
{
	cout << "Merge Sort\n\n";

	arrayDisplay(arr, size);

	// Initial sort of every other number
	for (int i = 0; i < size; i += 2)
	{
		if (arr[i] > arr[1 + i])
		{
			swap(&arr[i], &arr[i + 1]);
			arrayDisplay(arr, size);
		}
	}

	int start = size;
	int count = 0;
	int count2 = 1;
	int phase = 4;
	int ph;
	int cycle = 1;

	while (start > 1)
	{
		start /= 2;
		count++;
	}

	if (size > 2)
	{
		while (count > 0)
		{
			for (int i = 0; i < phase; i++)
			{
				if (arr[i] < arr[i - 1] && i >= 1)
				{
					ph = i;
					while (arr[i] < arr[i - 1] && i >= 1)
					{
						swap(&arr[i], &arr[i - 1]);
						i--;
						loops++;
					}
					i = ph;
					arrayDisplay(arr, size);
				}
				if (count2 == phase && (i + 1) != size)
				{
					i += 2;
					count2 = 0;
				}
				else if ((i + 1) == size)
				{
					i = phase * cycle;
					cycle++;
				}
				count2++;
			}
			count--;
			phase *= 2;
		}
	}
	loopDisplay();
}