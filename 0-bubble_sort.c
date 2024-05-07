#include "sort.h"


/**
 * bubble_sort - implements the bubble sort algorithm
 * @array: pointer to the array bieng sorted
 * @size: size of the array
 * Return: none
 */
void bubble_sort(int *array, size_t size)
{
	int tmp;
	size_t i, j;

	/* exit if array doesnt exist or is empty */
	if (size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				/*print after every swap*/
				print_array(array, size);
			}
		}
	}
}
