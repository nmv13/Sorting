/*********************************
 * shell.h
 ********************************/

#ifndef SHELL_H
#define SHELL_H
#include <iostream>
#include "sort.h"
using namespace std;

class Shell : public Sort
{
	public:
		void shell(int arr[], int size);
		Shell(int arr[], int size)
		{
			x = new int[size];
			createArray(arr, size);
			shell(x, size);
		}
		~Shell()
		{
			delete [] x;
			x = NULL;
		}
};

#endif /* shell_h */