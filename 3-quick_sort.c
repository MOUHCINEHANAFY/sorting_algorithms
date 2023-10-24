#include "sort.h"

/**
 * swap - Swaps
 * @a: first integer
 * @b: second integer
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}


/**
 * quick_sort - Sorts an array of integers
 * @array: Array
 * @size: Size
 */


void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	Reccursive_sort(array, 0, size - 1, size);
}


/**
 * Reccursive_sort - Recursively sorts
 * @array: Array
 * @last: Start idx
 * @first: End idx
 * @size: Size
 */


void Reccursive_sort(int *array, int last, int first, size_t size)
{
	int buck;

	if (last < first)
	{
		buck = part(array, last, first, size);
		Reccursive_sort(array, last, buck - 1, size);
		Reccursive_sort(array, buck + 1, first, size);
	}
}

/**
 * part - Partitions
 * @array: Array
 * @last: Start idx
 * @first: End idx
 * @size: Size
 * Return: The buck index
 */
int part(int *array, int last, int first, size_t size)
{
	int a, b;
	int buck = array[first];

	a = last - 1;
	for (b = last; b < first; b++)
	{
		if (array[b] < buck)
		{
			a++;
			if (a != b)
			{
				swap(&array[a], &array[b]);
				print_array(array, size);
			}
		}
	}
	if (a + 1 != first)
	{
		swap(&array[a + 1], &array[first]);
		print_array(array, size);
	}
	return (a + 1);
}
