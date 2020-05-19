/*********************************
 * gnome.h
 ********************************/

#ifndef GNOME_H
#define GNOME_H
#include <iostream>
#include "sort.h"
using namespace std;

class Gnome : public Sort
{
	public:
		void gnome(int arr[], int size);
		Gnome(int arr[], int size)
		{
			x = new int[size];
			createArray(arr, size);
			gnome(x, size);
		}
		~Gnome()
		{
			delete [] x;
			x = NULL;
		}
};

#endif /* gnome_h */