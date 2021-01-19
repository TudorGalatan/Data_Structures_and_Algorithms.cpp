/*
	Heap Sort - Implementation
*/

#include "Algorithms_HeapSort.h"


void heapSort (int numbers[], unsigned int size)
{
	unsigned int lastPosition = size - 1;

	for (int index = lastPosition / 2; index >= 0; index--)
		insertNodeInHeap(numbers, size, index);

	while (lastPosition > 0)
	{
		int container = numbers[0];
		numbers[0] = numbers[lastPosition];
		numbers[lastPosition] = container;
		insertNodeInHeap(numbers, lastPosition, 0);
		lastPosition--;
	}
}


void insertNodeInHeap (int numbers[], unsigned int size, unsigned int node)
{
	bool isHeap = false;

	while (2 * node + 1 < size and not isHeap)
	{
		unsigned int position = 2 * node + 1;
		if (position < size - 1 and numbers[position] < numbers[position + 1])
			position++;
		if (numbers[node] < numbers[position])
		{
			int container = numbers[node];
			numbers[node] = numbers[position];
			numbers[position] = container;
			node = position;
		}
		else
			isHeap = true;
	}
}


void testHeapSort ()
{
	int numbers[10] = { 5, -5, -5, 7, 1005, -34, 0, -35, 7, 14 };
	int size = 10;

	heapSort(numbers, size);

	int sortedNumbers[10] = { -35, -34, -5, -5, 0, 5, 7, 7, 14, 1005 };

	bool correctResult = true;
	for (unsigned int index = 0; index < size && correctResult; index++)
		if (numbers[index] != sortedNumbers[index])
			correctResult = false;

	std::cout << "\n\tThe Heap Sort algorithm ";
	if (correctResult)
		std::cout << "works";
	else
		std::cout << "does not work";
	std::cout << " properly.\n";
}