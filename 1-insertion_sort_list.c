#include "sort.h"

/**
 * swap - swaps
 * @list: pointer to db
 * @a: first node ptr
 * @b: second node ptr
 */
void swap(listint_t **list, listint_t *a, listint_t *b)
{
	listint_t *nextb = b->next;
	listint_t *preva = a->prev;


	if (preva)
	{
		preva->next = b;
	}
	if (nextb)
	{
		nextb->prev = a;
	}
	a->prev = b;
	b->prev = preva;
	a->next = nextb;
	b->next = a;
	if (b->prev == NULL)
	{
		*list = b;
	}
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
				swap(list, buck, current);
				print_list(*list);
			}
			buck = buck->prev;
		}
		current = current->next;
	}

}
