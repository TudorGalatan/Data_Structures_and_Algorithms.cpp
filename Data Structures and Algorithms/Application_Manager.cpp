/*
	This is the starting point of the application.
*/

#include "Algorithms_SelectionSort.h"
#include "Algorithms_BubbleSort.h"
#include "Algorithms_InsertionSort.h"
#include "Algorithms_HeapSort.h"
#include "Algorithms_MergeSort.h"


int main ()
{
	testSelectionSort();
	testBubbleSort();
	testInsertionSort();
	testHeapSort();
	testMergeSort();

	return 0;
}