#include "sort.h"

/**
 * swap_nodes - Swap two nodes in a doubly linked list
 * @list: Pointer to the head of the list
 * @a: First node to swap
 * @b: Second node to swap
 */
void swap_nodes(listint_t **list, listint_t *a, listint_t *b)
{
	if (a == NULL || b == NULL || a == b)
		return;

	listint_t *aprev = a->prev;
	listint_t *bnext = b->next;

	if (aprev)
		aprev->next = b;
	else
		*list = b;

	if (bnext)
		bnext->prev = a;

	a->prev = b;
	b->next = a;

	a->next = bnext;
	b->prev = aprev;
}

/**
 * insertion_sort_list - sorts sort db linked list
 * @list: DB list pointer
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *buck;
	listint_t *current;

	if (list == NULL || *list == NULL)
	{
		return;
	}

	current = *list;
	current = current->next;

	while (current)
	{
		buck = current;
		while (buck)
		{
			if (buck->n > current->n)
			{
				swap_nodes(list, buck, current);
				print_list(*list);
			}
			buck = buck->prev;
		}
		current = current->next;
	}

}
