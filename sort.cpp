/********************************************************************
 * sort.cpp
 ********************************************************************/
#include <iostream>
#include "sort.h"

using namespace std;

/********************************************************************
* This function displays the current array status
********************************************************************/
void Sort :: arrayDisplay(int arr[], int size)
{
	cout << "{ ";
	for (int i = 0; i < size; i++)
	{
		if (i == size - 1)
			cout << arr[i] << " ";
		else
			cout << arr[i] << ", ";
	}
	cout << "}\n\n";
}

/********************************************************************
* This function swaps two items in an array
********************************************************************/
void Sort :: swap(int * a, int * b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
	swaps++;
}

/********************************************************************
* This function displays the loop, swap, and total counts
********************************************************************/
void Sort :: loopDisplay()
{
	cout << "<---------------------->\n";
	cout << "   Loop Count: " << loops << endl;
	cout << "   Swap Count: " << swaps << endl;
	cout << "   Total:      " << (loops + swaps) << endl;
	cout << "<---------------------->\n";
}

/********************************************************************
* This function initially creates an array for each object
********************************************************************/
void Sort :: createArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		x[i] = arr[i];
	}
}
