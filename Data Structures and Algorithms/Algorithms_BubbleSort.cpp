/*
	Bubble Sort
*/

#include "Algorithms_BubbleSort.h"


void bubbleSort (int numbers[], unsigned int size)
{
	bool sorted = false;
	do
	{
		sorted = true;
		for (unsigned int index = 0; index < size - 1; index++)
			if (numbers[index] > numbers[index + 1])
			{
				sorted = false;
				int container = numbers[index];
				numbers[index] = numbers[index + 1];
				numbers[index + 1] = container;
			}
	}
	while (not sorted);
}


void testBubbleSort ()
{
	int numbers[10] = {5, -5, -5, 7, 1005, -34, 0, -35, 7, 14};
	int size = 10;
	
	bubbleSort(numbers, size);

	int sortedNumbers[10] = {-35, -34, -5, -5, 0, 5, 7, 7, 14, 1005};
	
	bool correctResult = true;
	for (unsigned int index = 0; index < size && correctResult; index++)
		if (numbers[index] != sortedNumbers[index])
			correctResult = false;

	std::cout << "\n\tThe function ";
	if (correctResult)
		std::cout << "works";
	else
		std::cout << "does not work";
	std::cout << " properly.\n";
}