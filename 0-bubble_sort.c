#include "sort.h"

/**
 * bubble_sort - sort array with buble sort algorythme
 * @array: sorted array
 * @size: array size
 */


void bubble_sort(int *array, size_t size)
{
	unsigned int a, b, buck;


	if (array == NULL)
	{
		return;
	}

	for (a = 0; a < size - 1; a++)
	{
		for (b = 0; b < size - a - 1; b++)
		{
			if (array[b] > array[b + 1])
			{
				buck = array[b];
				array[b] = array[b + 1];
				array[b + 1] = buck;
				print_array(array, size);
			}
		}
	}
}
