/*
	This is the starting point of the application.
*/

#include "DataStructures_BinarySearchTree.h"
#include "DataStructures_AdelsonVelskyLandisTree.h"
#include "Algorithms_LinearSearch.h"
#include "Algorithms_BinarySearch.h"
#include "Algorithms_SelectionSort.h"
#include "Algorithms_BubbleSort.h"
#include "Algorithms_InsertionSort.h"
#include "Algorithms_HeapSort.h"
#include "Algorithms_MergeSort.h"


int main ()
{
	BinarySearchTree binarySearchTree();
	testLinearSearch();
	testBinarySearch();
	testSelectionSort();
	testBubbleSort();
	testInsertionSort();
	testHeapSort();
	testMergeSort();

	return 0;
}