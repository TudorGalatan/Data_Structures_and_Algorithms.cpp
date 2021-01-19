/*
	Linear Search - Implementation
*/

#include "Algorithms_LinearSearch.h"


int linearSearch (int numbers[], unsigned int size, int element)
{
	for (unsigned int index = 0; index < size; index++)
		if (numbers[index] == element)
			return index;

	return -1;
}


void testLinearSearch ()
{
	int numbers[10] = { 5, -5, -5, 7, 1005, -34, 0, -35, 7, 14 };
	int size = 10;
	int element = -34;

	int result = linearSearch(numbers, size, element);
	int correctResult = 5;

	std::cout << "\n\tThe Linear Search algorithm ";
	if (result == correctResult)
		std::cout << "works";
	else
		std::cout << "does not work";
	std::cout << " properly.\n";
}