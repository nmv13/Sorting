/*********************************
 * sort.h
 ********************************/

#ifndef SORT_H
#define SORT_H
#include <iostream>
using namespace std;

class Sort
{
	public:
		int loops;
		int swaps;
		Sort()
		{
			loops = 0;
			swaps = 0;
		}
		void loopDisplay();
		void arrayDisplay(int arr[], int size);
		void swap(int * a, int * b);
		void bitonic(int arr[], int size);
		void bubble(int arr[], int size);
		void cocktail(int arr[], int size);
		void comb(int arr[], int size);
		void counting(int arr[], int size);
		void cycle(int arr[], int size);
		void gnome(int arr[], int size);
		void heap(int arr[], int size);
		void insertion(int arr[], int size);
		void merge(int arr[], int size);
		void quick(int arr[], int size);	
		void radix(int arr[], int size);
		void selection(int arr[], int size);
		void shell(int arr[], int size);
};

#endif /* sort_h */