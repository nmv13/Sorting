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
		void bis(int arr[], int size);
		void bs(int arr[], int size);
		void bps(int arr[], int size);
		void bubble(int arr[], int size);
		void bucket(int arr[], int size);
		void cts(int arr[], int size);
		void cs(int arr[], int size);
		void comb(int arr[], int size);
		void count(int arr[], int size);
		void cycle(int arr[], int size);
		void gs(int arr[], int size);
		void hs(int arr[], int size);
		void is(int arr[], int size);
		void ims(int arr[], int size);
		void iqs(int arr[], int size);
		void ms(int arr[], int size);
		void msdl(int arr[], int size);
		void msll(int arr[], int size);
		void oesbs(int arr[], int size);
		void pan(int arr[], int size);
		void ps(int arr[], int size);
		void qs(int arr[], int size);
		void qdll(int arr[], int size);
		void qsll(int arr[], int size);
		void rs(int arr[], int size);
		void rbs(int arr[], int size);
		void ris(int arr[], int size);
		void ss(int arr[], int size);
		void shell(int arr[], int size);
		void sleep(int arr[], int size);
		void stooge(int arr[], int size);
		void strand(int arr[], int size);
		void structure(int arr[], int size);
		void tag(int arr[], int size);
		void tim(int arr[], int size);
		void tree(int arr[], int size);
		void wms(int arr[], int size);
		void wq(int arr[], int size);		
};

#endif /* sort_h */