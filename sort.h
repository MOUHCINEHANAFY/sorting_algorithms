#ifndef SORT_H
#define SORT_H

#include <stdio.h>
/**
 * struct listint_s - Doubly linked list
 * @n: Integer
 * @next: Next element pointer
 * @prev: Pointer to the previous element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void bubble_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void cocktail_sort_list(listint_t **list);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void counting_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);

#endif
