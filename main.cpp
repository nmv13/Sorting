#include <iomanip>
#include <iostream>
#include "sort.cpp"

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
	switch(ans)
	{
		case 1:
			s.bitonic(arr, size);
			break;
		case 2:
			s.bubble(arr, size);
			break;
		case 3:
			s.cocktail(arr, size);
			break;
		case 4:
			s.comb(arr, size);
			break;
		case 5:
			s.counting(arr, size);
			break;
		case 6:
			s.cycle(arr, size);
			break;
		case 7:
			s.gnome(arr, size);
			break;
		case 8:
			s.heap(arr, size);
			break;
		case 9:
			s.insertion(arr, size);
			break;
		case 10:
			s.merge(arr, size);
			break;
		case 11:
			s.quick(arr, size);
			break;
		case 12:
			s.radix(arr, size);
			break;
		case 13:
			s.selection(arr, size);
			break;
		case 14:
			s.shell(arr, size);
			break;
		default:
			cout << "Unknown\n";
	}
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