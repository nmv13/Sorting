###############################################################
# Program:
#     Sorting Algorithms
# Author:
#     Nakai Velasquez
# Summary:
#     This program has 14 different sorting methods to chose 
#     from and test.
###############################################################


a.out : main.o sort.o bitonic.o bubble.o cocktail.o comb.o counting.o cycle.o gnome.o heap.o insertion.o merge.o quick.o radix.o selection.o shell.o
	g++ main.o sort.o bitonic.o bubble.o cocktail.o comb.o counting.o cycle.o gnome.o heap.o insertion.o merge.o quick.o radix.o selection.o shell.o

main.o : main.cpp sort.h
	g++ -c main.cpp

sort.o : sort.h sort.cpp
	g++ -c sort.cpp

bitonic.o : sort.h bitonic.h bitonic.cpp
	g++ -c bitonic.cpp

bubble.o : sort.h bubble.h bubble.cpp
	g++ -c bubble.cpp

cocktail.o : sort.h cocktail.h cocktail.cpp
	g++ -c cocktail.cpp

comb.o : sort.h comb.h comb.cpp
	g++ -c comb.cpp

counting.o : sort.h counting.h counting.cpp
	g++ -c counting.cpp

cycle.o : sort.h cycle.h cycle.cpp
	g++ -c cycle.cpp

gnome.o : sort.h gnome.h gnome.cpp
	g++ -c gnome.cpp

heap.o : sort.h heap.h heap.cpp
	g++ -c heap.cpp

insertion.o : sort.h insertion.h insertion.cpp
	g++ -c insertion.cpp

merge.o : sort.h merge.h merge.cpp
	g++ -c merge.cpp

quick.o : sort.h quick.h quick.cpp
	g++ -c quick.cpp

radix.o : sort.h radix.h radix.cpp
	g++ -c radix.cpp

selection.o : sort.h selection.h selection.cpp
	g++ -c selection.cpp

shell.o : sort.h shell.h shell.cpp
	g++ -c shell.cpp

clean :
	rm *.o a.out

