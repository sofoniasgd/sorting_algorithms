#include "sort.h"


/**
 * bubble_sort - implements the bubble sort algorithm
 * @array: pointer to the array bieng sorted
 * @size: size of the array
 * Return: none
 */
void bubble_sort(int *array, size_t size)
{
	int swaps = 1, tmp;
	size_t i;

	/* exit if array doesnt exist or is empty */
	if (size <= 0)
		return;

	while (swaps != 0)
	{
		swaps = 0;
		for (i = 0; i < size; i++)
		{
			if ((i + 1) < size)
			{
				if (array[i] > array[i + 1])
				{
					tmp = array[i];
					array[i] = array[i + 1];
					array[i + 1] = tmp;
					swaps++;
					/*print after every swap*/
					print_array(array, size);
				}
			}
		}
	}
}
