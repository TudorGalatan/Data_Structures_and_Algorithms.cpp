/*
	Selection Sort - Interface
*/

#pragma once

#include <iostream>


/*
	Sorts a given array of numbers using the Selection Sort algorithm.
	Input:
		- "numbers": the array of numbers
		- "size": the size of the array of numbers
	Output:
		- "numbers": the updated (sorted) array of numbers
	Running Time: O(n^2)
*/
void selectionSort (int numbers[], unsigned int size);


/*
	Tests the "selectionSort" function.
	Input:
		- none
	Output:
		- a message specifying if the algorithm works correctly or not
*/
void testSelectionSort ();