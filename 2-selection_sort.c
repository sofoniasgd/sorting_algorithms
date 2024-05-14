# include "sort.h"

/**
 * selection_sort - sorts an array using selection sort algorithm
 *  @array: pointer to array
 *  @size: size of array
 * Return: none
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, index = 0;
	int temp;

	if (size < 1)
		return;

	for (i = 0; i < size; i++)
	{
		index = i + 1;
	/* main loop, separates the sorted list from the unsorted list */
		for (j = i + 1; j < size; j++)
		{
		/* finds the least number from the unsorted list */
			if (array[j] < array[i] && array[j] < array[index])
			{
				index = j;
			}
		}
		if (array[index] < array[i] && index < size)
		{
			/* swaps and print if found number less than array[i] */
			temp = array[i];
			array[i] = array[index];
			array[index] = temp;
			print_array(array, size);
			index = 0;
		}
	}

}
