/*
	Heap Sort - Interface
*/

#pragma once

#include <iostream>


/*
	Sorts a given array of numbers using the Heap Sort algorithm.
	Input:
		- "numbers": the array of numbers
		- "size": the size of the array of numbers
	Output:
		- "numbers": the updated (sorted) array of numbers
	Running Time: O(n * logn)
*/
void heapSort (int numbers[], unsigned int size);


/*
	Inserts a node in the heap.
	Input:
		- "numbers": the array of numbers
		- "size": the size of the array of numbers
		- "node": the position of an element from the array
	Output:
		- "numbers": the updated array of numbers
	Running Time: O(n * logn)
*/
void insertNodeInHeap (int numbers[], unsigned int size, unsigned int node);


/*
	Tests the "heapSort" function.
	Input:
		- none
	Output:
		- a message specifying if the algorithm works correctly or not
*/
void testHeapSort ();