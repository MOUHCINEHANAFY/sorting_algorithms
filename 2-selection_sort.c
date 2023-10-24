#include "sort.h"

/**
 * selection_sort - sorts array
 * @array: array to be sorted
 * @size: Array size
 */


void selection_sort(int *array, size_t size)
{
	unsigned int a, b, last;
	int buck;


	for (a = 0; a < size - 1; a++)
	{
		last = a;
		for (b = i + 1; b < size; b++)
		{
			if (array[b] < array[last])
				last = b;
		}
		if (last != a)
		{
			buck = array[last];
			array[last] = array[a];
			array[a] = buck;
			print_array(array, size);
		}
	}
}
