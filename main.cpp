#include <iomanip>
#include <iostream>
#include "sort.h"
#include "bitonic.h"
#include "bubble.h"
#include "cocktail.h"
#include "comb.h"
#include "counting.h"
#include "cycle.h"
#include "gnome.h"
#include "heap.h"
#include "insertion.h"
#include "merge.h"
#include "quick.h"
#include "radix.h"
#include "selection.h"
#include "shell.h"

using namespace std;

void menu()
{
	cout << endl;
	cout << "Bitonic Sort ---------------------- 1   " << " Heap Sort ------------------------- 8\n"
	     << "Bubble Sort ----------------------- 2   " << " Insertion Sort -------------------- 9\n"
		 << "Cocktail Sort --------------------- 3   " << " Merge Sort ------------------------ 10\n"
		 << "Comb Sort ------------------------- 4   " << " Quick Sort ------------------------ 11\n"
		 <<	"Counting Sort --------------------- 5   " << " Radix Sort ------------------------ 12\n"
		 << "Cycle Sort ------------------------ 6   " << " Selection Sort -------------------- 13\n"
		 << "Gnome Sort ------------------------ 7   " << " Shell Sort ------------------------ 14\n\n";
}

void sortf(int ans)
{
	// initiate sort class and size variables
	Sort s;
	int size;

	// read in values from user starting with initial number of variables in array
	cout << ">Enter the size of the positive number group: ";
	cin  >> size; 	

	// read in values of array from user based on array size
	int arr[size];

	cout << ">Enter group with a space between each number: ";

	for (int i = 0; i < size; i++)
		cin >> arr[i];

	// initiate display selection for reassurance
	cout << endl << "###############################################################################\n"
		 <<         "#-----------------------------------------------------------------------------#\n"
		 <<         "Method: ";

	// call appropriate function based on ans variable
	if (ans == 1)
		Bitonic * bitonic = new Bitonic(arr, size);
	else if (ans == 2)
		Bubble * bubble = new Bubble(arr, size);
	else if (ans == 3)
		Cocktail * cocktail = new Cocktail(arr, size);
	else if (ans == 4)
		Comb * comb = new Comb(arr, size);
	else if (ans == 5)
		Counting * counting = new Counting(arr, size);
	else if (ans == 6)
		Cycle * cycle = new Cycle(arr, size);
	else if (ans == 7)
		Gnome * gnome = new Gnome(arr, size);
	else if (ans == 8)
		Heap * heap = new Heap(arr, size);
	else if (ans == 9)
		Insertion * insertion = new Insertion(arr, size);
	else if (ans == 10)
		Merge * merge = new Merge(arr, size);
	else if (ans == 11)
		Quick * quick = new Quick(arr, size);
	else if (ans == 12)
		Radix * radix = new Radix(arr, size);
	else if (ans == 13)
		Selection * selection = new Selection(arr, size);
	else if (ans == 14)
		Shell * shell = new Shell(arr, size);
	else
		cout << "Unknown\n";

	cout << "#-----------------------------------------------------------------------------#\n";
	cout << "###############################################################################\n\n";
}

int main()
{
	// create variable to run loop and accept input
	int go = 1;
	int ans;

	// Display menu
	menu();

	while (go)
	{

		// Prompt user for input and do accordingly
		cout << ">Enter '15' for menu, 'q' for quit, number above for sort: ";
		cin  >> ans;

		// see prompt
		if (ans >= 1 && ans < 15)
		{
			sortf(ans);
		}
		else if (ans == 15) // 63 on ascii
			menu();
		else if (ans == 0) // 113 or 81 on ascii
			go = 0;
		else
			cout << ">Invalid command\n";
	}

	return 0;
}