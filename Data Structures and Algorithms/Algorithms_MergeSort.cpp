/*
	Merge Sort - Implementation
*/

#include "Algorithms_MergeSort.h"


void mergeSort (int numbers[], unsigned int size)
{
	if (size < 2)
		return;

	unsigned int middle = size / 2;
	int leftPartition[1000], rightPartition[1000];

	for (unsigned int index = 0; index < middle; index++)
		leftPartition[index] = numbers[index];
	for (unsigned int index = middle; index < size; index++)
		rightPartition[index - middle] = numbers[index];

	mergeSort(leftPartition, middle);
	mergeSort(rightPartition, size - middle);
	mergeArrays(leftPartition, rightPartition, numbers, middle, size - middle);
}


void mergeArrays (int leftPartition[], int rightPartition[], int mergedArray[], unsigned int sizeOfLeft, unsigned int sizeOfRight)
{
	unsigned int indexLeft = 0, indexRight = 0, indexMerged = 0;

	while (indexLeft < sizeOfLeft && indexRight < sizeOfRight)
	{
		if (leftPartition[indexLeft] <= rightPartition[indexRight])
		{
			mergedArray[indexMerged] = leftPartition[indexLeft];
			indexLeft++;
		}
		else
		{
			mergedArray[indexMerged] = rightPartition[indexRight];
			indexRight++;
		}
		indexMerged++;
	}

	while (indexLeft < sizeOfLeft)
	{
		mergedArray[indexMerged] = leftPartition[indexLeft];
		indexLeft++;
		indexMerged++;
	}

	while (indexRight < sizeOfRight)
	{
		mergedArray[indexMerged] = rightPartition[indexRight];
		indexRight++;
		indexMerged++;
	}
}


void testMergeSort ()
{
	int numbers[10] = { 5, -5, -5, 7, 1005, -34, 0, -35, 7, 14 };
	int size = 10;

	mergeSort(numbers, size);

	int sortedNumbers[10] = { -35, -34, -5, -5, 0, 5, 7, 7, 14, 1005 };

	bool correctResult = true;
	for (unsigned int index = 0; index < size && correctResult; index++)
		if (numbers[index] != sortedNumbers[index])
			correctResult = false;

	std::cout << "\n\tThe Merge Sort algorithm ";
	if (correctResult)
		std::cout << "works";
	else
		std::cout << "does not work";
	std::cout << " properly.\n";
}