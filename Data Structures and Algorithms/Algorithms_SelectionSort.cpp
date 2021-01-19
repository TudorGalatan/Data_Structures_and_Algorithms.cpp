/*
	Selection Sort - Implementation
*/

#include "Algorithms_SelectionSort.h"


void selectionSort (int numbers[], unsigned int size)
{
	for (unsigned int index_1 = 0; index_1 < size - 1; index_1++)
	{
		unsigned int positionOfMinimum = index_1;
		for (unsigned int index_2 = index_1 + 1; index_2 < size; index_2++)
			if (numbers[index_2] < numbers[positionOfMinimum])
				positionOfMinimum = index_2;
		if (numbers[index_1] != numbers[positionOfMinimum])
		{
			int container = numbers[index_1];
			numbers[index_1] = numbers[positionOfMinimum];
			numbers[positionOfMinimum] = container;
		}
	}
}


void testSelectionSort ()
{
	int numbers[10] = { 5, -5, -5, 7, 1005, -34, 0, -35, 7, 14 };
	int size = 10;

	selectionSort(numbers, size);

	int sortedNumbers[10] = { -35, -34, -5, -5, 0, 5, 7, 7, 14, 1005 };

	bool correctResult = true;
	for (unsigned int index = 0; index < size && correctResult; index++)
		if (numbers[index] != sortedNumbers[index])
			correctResult = false;

	std::cout << "\n\tThe Selection Sort algorithm ";
	if (correctResult)
		std::cout << "works";
	else
		std::cout << "does not work";
	std::cout << " properly.\n";
}