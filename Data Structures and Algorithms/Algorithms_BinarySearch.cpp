/*
	Binary Search - Implementation
*/

#include "Algorithms_BinarySearch.h"


int binarySearch (int numbers[], unsigned int size, int element)
{
	unsigned int start = 0, end = size - 1;
	unsigned int middle;

	while (start <= end)
	{
		middle = (start + end) / 2;
		
		if (element <= numbers[middle])
			end = middle - 1;
		else
			start = middle + 1;
	}

	if (numbers[middle] == element)
		return middle;

	return -1;
}


void testBinarySearch ()
{
	int numbers[10] = { -5, -3, 0, 7, 15, 78, 89, 89, 89, 90 };
	int size = 10;
	int element = 89;

	int result = binarySearch(numbers, size, element);
	int correctResult = 6;

	std::cout << "\n\tThe Binary Search algorithm ";
	if (result == correctResult)
		std::cout << "works";
	else
		std::cout << "does not work";
	std::cout << " properly.\n";
}