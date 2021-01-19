/*
	Insertion Sort - Implementation
*/

#include "Algorithms_InsertionSort.h"


void insertionSort (int numbers[], unsigned int size)
{
	for (unsigned int index = 1; index < size; index++)
	{
		int currentNumber = numbers[index];
		unsigned int position = index;
		while (position > 0 && numbers[position - 1] > currentNumber)
		{
			numbers[position] = numbers[position - 1];
			position--;
		}
		numbers[position] = currentNumber;
	}
}


void testInsertionSort ()
{
	int numbers[10] = { 5, -5, -5, 7, 1005, -34, 0, -35, 7, 14 };
	int size = 10;

	insertionSort(numbers, size);

	int sortedNumbers[10] = { -35, -34, -5, -5, 0, 5, 7, 7, 14, 1005 };

	bool correctResult = true;
	for (unsigned int index = 0; index < size && correctResult; index++)
		if (numbers[index] != sortedNumbers[index])
			correctResult = false;

	std::cout << "\n\tThe Insertion Sort algorithm ";
	if (correctResult)
		std::cout << "works";
	else
		std::cout << "does not work";
	std::cout << " properly.\n";
}