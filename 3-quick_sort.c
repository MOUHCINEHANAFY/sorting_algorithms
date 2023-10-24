#include "sort.h"


/**
 * array_swap - swap two values in array
 * @first: first value
 * @second: second value
 */


void array_swap(int *first, int *second)
{
	int buck;

	buck = *first;
	*first = *second;
	*second = buck;
}


/**
 * part - partition for sorting
 * @array: array
 * @last: tail index
 * @first: head index
 * @size: array size
 * Return: partition index
 */



int part(int array[], int last, int first, size_t size)
{
	int a, b, check = 0;

	a = last - 1;

	for (b = last; b <= first - 1; b++)
	{
		if (array[b] < array[first])
		{
			check = 1;
			a++;
			array_swap(&array[b], &array[a]);
		}
	}
	if (check == 1)
	{
		print_array(array, size);
	}
	array_swap(&array[a + 1], &array[first]);

	if (check == 0)
	{
		print_array(array, size);
	}
	return (a + 1);
}


/**
 * sorthandle - quick sort reccursif
 * @array: array
 * @last: tail index
 * @first: head index
 * @size: size
 */



void sorthandle(int *array, int last, int first, size_t size)
{
	int tmp;

	if (last < first)
	{
		tmp = part(array, last, first, size);
		sorthandle(array, last, tmp - 1, size);
		sorthandle(array, tmp + 1, first, size);
	}
}


/**
 * quick_sort - calls sorthandle
 * @array: array
 * @size: Array size
 */
void quick_sort(int *array, size_t size)
{
	sorthandle(array, 0, size - 1, size);
	print_array(array, size);
}
