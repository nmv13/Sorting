/********************************************************************
* bitonic.cpp
********************************************************************/
#include "sort.h"
#include "bitonic.h"
#include <iostream>

using namespace std;

/********************************************************************
* Bitonic Sort : Needs bug fixes
********************************************************************/
void Bitonic :: bitonic(int arr[], int size)
{
	cout << "Bitonic Sort\n\n";

	arrayDisplay(arr, size);


	// Initiate full sort loop
	// Start with 2 and continue to increase by power of 2
	
	// 1) 1,2 min-max -> 3,4 max-min

	// 2) 1,3 2,4 min-max -> 5,7 6,8 max-min

	// 1) 1,2 3,4 min-min -> 5,6 7,8 max-min

	// 4) 1,5 2,6 3,7 4,8 min-max -> 9,13 10,14 11,15 12,16 max-min

	// 2) 1,3 2,4 5,7 6,8 min-max -> 9,11 10,12 13,15 14,16 max-min

	// 1) 1,2 3,4 5,6 7,8 min-max -> 9,10 11,12 13,14 15,16 max-min

	// And so on, "x)" represents the power starting from 1, then 2 in base 2
	// If the array is 16 intigers long, the sequence will be...
	// 1   2->1   4->2->1   8->4->2->1   16->8->4->2->1 

	int i = 0;               // index
	int step = 1;            // incriments by power of 2
	int count = 1;           // determines number of times an action occured
	int power = 1;           // Shows what poer of 2 it is
	bool turn = false;
	bool done = false;
	bool first = true;


	while (!done)
	{
		do
		{
			if (count > step)
			{
				turn = !turn;
				count = 1;
				first = true;
			}

			if (turn)
			{
				if (first)
				{
					first = false;
					i += step;
				}
				if (arr[i] > arr[i + power])
					swap(&arr[i], &arr[i + power]);
			}
			else
			{
				if (first)
				{
					first = false;
					i += step;
				}
				if (arr[i] < arr[i + power])
					swap(&arr[i], &arr[i + power]);
			}

			count++;
			if (step == 1)
				i += step + 1;
			else
				i += step;

			if (i > (size - 1) && power != 1)
			{
				power = (power / 2);
				i = 0;
			}
			loops++;
		} while (power > 1 || i <= (size - 1));
		if (step == size)
			done = true;

		step *= 2;
		power = step;
		count = 1;
		turn = true;
		i = 0;
		arrayDisplay(arr, size);
	}

	// Last rearrange stage (where the power is equal to the size of the array)

	i = 0;
	count = (size / 2);
	int count2 = 1; 
	first = false;
	bool cycle = false;

	while (count >= 1)
	{
		if (cycle == true)
		{
			first = true;

		}

		if (arr[i] > arr[i + count])
		{
			swap(&arr[i], &arr[i + count]);
		}

		
		if ((i + count) >= (size - 1))
		{
			i = 0;
			count = (count / 2);
			count2 *= 2;
			cycle = true;
		}
		else
			i++;

		arrayDisplay(arr, size); loops++;
	}
	loopDisplay();
	
}