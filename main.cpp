#include <iomanip>
#include <iostream>
#include "sort.cpp"

using namespace std;

void menu()
{
	cout << endl;
	cout <<	"Binary Insertion Sort ------------- W   " << " Pigeonhole Sort ------------------- 21\n"
		 << "Bitonic Sort ---------------------- 2   " << " Quick Sort ------------------------ 22\n"
		 <<	"BogoSort or Permutation Sort ------ X   " << " QuickSort on Doubly Linked List --- 23\n"
	     << "Bubble Sort ----------------------- 4   " << " QuickSort on Singly Linked List --- 24\n"
		 <<	"Bucket Sort ----------------------- X   " << " Radix Sort ------------------------ 25\n"
		 << "----------------------------------------------- -------------------------------\n"
		 << "Cartesian Tree Sorting ------------ W   " << " Recursive Bubble Sort ------------- 26\n" 
		 << "Cocktail Sort --------------------- 7   " << " Recursive Insertion Sort ---------- 27\n" 
		 << "Comb Sort ------------------------- 8   " << " Selection Sort -------------------- 28\n"
		 << "Counting Sort --------------------- 9   " << " Shell Sort ------------------------ 29\n"
		 << "Cycle Sort ------------------------ 10  " << " Sleep Sort ------------------------ 30\n"
		 << "-------------------------------------------------------------------------------\n"	
		 <<	"Gnome Sort ------------------------ 11   " << "Stooge Sort ----------------------- 31\n" 
		 <<	"Heap Sort ------------------------- 12   " << "Strand Sort ----------------------- 32\n"
		 <<	"Insertion Sort -------------------- 13   " << "Structure Sorting ----------------- 33\n"
		 <<	"Iterative Merge Sort -------------- 14   " << "Tag Sort -------------------------- 34\n"
		 <<	"Iterative Quick Sort -------------- 15   " << "Tim Sort -------------------------- 35\n"
		 << "-------------------------------------------------------------------------------\n"
		 << "Merge Sort ------------------------ 16   " << "Tree Sort ------------------------- 36\n"
		 << "Merge Sort for Doubly Linked List - 17   " << "3-way Merge Sort ------------------ 37\n"
		 << "Merge Sort for Linked Lists ------- 18   " << "3-Way QuickSort ------------------- 38\n"
		 << "Odd-Even Sort / Brick Sort -------- 19\n"
		 << "Pancake Sorting ------------------- 20\n\n";		  		 
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
			s.bis(arr, size);
			break;
		case 2:
			s.bs(arr, size);
			break;
		case 3:
			s.bps(arr, size);
			break;
		case 4:
			s.bubble(arr, size);
			break;
		case 5:
			s.bucket(arr, size);
			break;
		case 6:
			s.cts(arr, size);
			break;
		case 7:
			s.cs(arr, size);
			break;
		case 8:
			s.comb(arr, size);
			break;
		case 9:
			s.count(arr, size);
			break;
		case 10:
			s.cycle(arr, size);
			break;
		case 11:
			s.gs(arr, size);
			break;
		case 12:
			s.hs(arr, size);
			break;
		case 13:
			s.is(arr, size);
			break;
		case 14:
			s.ims(arr, size);
			break;
		case 15:
			s.iqs(arr, size);
			break;
		case 16:
			s.ms(arr, size);
			break;
		case 17:
			s.msdl(arr, size);
			break;
		case 18:
			s.msll(arr, size);
			break;
		case 19:
			s.oesbs(arr, size);
			break;
		case 20:
			s.pan(arr, size);
			break;
		case 21:
			s.ps(arr, size);
			break;
		case 22:
			s.qs(arr, size);
			break;
		case 23:
			s.qdll(arr, size);
			break;
		case 24:
			s.qsll(arr, size);
			break;																				
		case 25:
			s.rs(arr, size);
			break;	
		case 26:
			s.rbs(arr, size);
			break;	
		case 27:
			s.ris(arr, size);
			break;
		case 28:
			s.ss(arr, size);
			break;
		case 29:
			s.shell(arr, size);
			break;
		case 30:
			s.sleep(arr, size);
			break;
		case 31:
			s.stooge(arr, size);
			break;
		case 32:
			s.strand(arr, size);
			break;
		case 33:
			s.structure(arr, size);
			break;
		case 34:
			s.tag(arr, size);
			break;
		case 35:
			s.tim(arr, size);
			break;
		case 36:
			s.tree(arr, size);
			break;
		case 37:
			s.wms(arr, size);
			break;
		case 38:
			s.wq(arr, size);
			break;
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
		cout << ">Enter '39' for menu, '40' for quit, number above for sort: ";
		cin  >> ans;

		// see prompt
		if (ans >= 1 && ans < 41)
		{
			if (ans == 39)
				menu();
			else if (ans == 40)
				go = 0;
			else
			{
				sortf(ans);
			}
		}
		else
			cout << ">Invalid command\n";
	}

	return 0;
}