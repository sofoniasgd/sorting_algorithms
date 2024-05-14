#include "sort.h"

/**
 * quick_sort - Function to perform quick sort with Lomuto's partition scheme
 * @array: array poniter
 * @size: size of array
 * Return: none
 */
void quick_sort(int *array, size_t size)
{
	int pivot, temp;
	size_t i = 0, j;

	pivot = array[size - 1];

	/* Base case: array with 0 or 1 element is already sorted */
	if (size <= 1)
	{
		return; 
	}

	for (j = 0; j < size - 1; j++)
	{
		if (array[j] < pivot)
		{
			/* Swap array[i] and array[j]*/
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			i++;
		}
	}

	/* Swap array[i] and array[size - 1] (pivot) */
	temp = array[i];
	array[i] = array[size - 1];
	array[size - 1] = temp;

	/* Recursively sort the sub-arrays */
	quick_sort(array, i);
	quick_sort(array + i + 1, size - i - 1);
}
