/*
	Merge Sort - Interface
*/

#pragma once

#include <iostream>


/*
	Sorts a given array of numbers using the Merge Sort algorithm.
	Input:
		- "numbers": the array of numbers
		- "size": the size of the array of numbers
	Output:
		- "numbers": the updated (sorted) array of numbers
	Running Time:
*/
void mergeSort (int numbers[], unsigned int size);


/*
	Merges two arrays into one.
	Input:
		- "leftPartition": the left partition
		- "rightPartition": the right partition
		- "mergedArray": the array of numbers
		- "sizeOfLeft": the size of the left partition
		- "sizeOfRight": the size of the right partition
	Output:
		- "mergedArray": the updated (merged) array of numbers
	Running Time:
*/
void mergeArrays (int leftPartition[], int rightPartition[], int mergedArray[], unsigned int sizeOfLeft, unsigned int sizeOfRight);


/*
	Tests the "mergeSort" function.
	Input:
		- none
	Output:
		- a message specifying if the algorithm works correctly or not
*/
void testMergeSort ();