/*
	Linear Search - Interface
*/

#pragma once

#include <iostream>


/*
	Searches for a given element in an array of elements using the
	Linear Search algorithm.
	Input:
		- "numbers": the array of numbers
		- "size": the size of the array of numbers
		- "element": the element to be searched for
	Output:
		- the index of the first occurence of the given element
		  inside the array, if the element is present inside the
		  array
		- -1, otherwise
	Running Time: O(n)
*/
int linearSearch (int numbers[], unsigned int size, int element);


/*
	Tests the "linearSearch" function.
	Input:
		- none
	Output:
		- a message specifying if the algorithm works correctly or not
*/
void testLinearSearch ();