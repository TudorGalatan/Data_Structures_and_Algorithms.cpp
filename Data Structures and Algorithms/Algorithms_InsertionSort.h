/*
	Insertion Sort - Interface
*/

#pragma once

#include <iostream>


/*
	Sorts a given array of numbers using the Insertion Sort algorithm.
	Input:
		- "numbers": the array of numbers
		- "size": the size of the array of numbers
	Output:
		- "numbers": the updated (sorted) array of numbers
	Running Time: O(n^2)
*/
void insertionSort (int numbers[], unsigned int size);


/*
	Tests the "insertionSort" function.
	Input:
		- none
	Output:
		- a message specifying if the algorithm works correctly or not
*/
void testInsertionSort ();