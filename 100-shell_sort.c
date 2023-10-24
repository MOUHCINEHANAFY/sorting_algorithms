#include "sort.h"


/**
 * shell_sort - Sorts an array of integers
 * @array: Array
 * @size: Size
 */
void shell_sort(int *array, size_t size)
{
	size_t gap = 1;
	size_t a, b;
	int buck;

	if (array == NULL || size < 2)
	{
		return;
	}
	while (gap < size / 3)
		gap = gap * 3 + 1;

	while (gap > 0)
	{
		for (a = gap; a < size; a++)
		{
			buck = array[a];
			b = a;

			while (b >= gap && array[b - gap] > buck)
			{
				array[b] = array[b - gap];
				b -= gap;
			}

			array[b] = buck;
		}

		print_array(array, size);

		gap = (gap - 1) / 3;
	}
}

