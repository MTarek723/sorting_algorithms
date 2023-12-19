#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of
 *		integers using Insertion Sort
 *
 * @list: The list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *prev, *next;

	if (!list || !(*list) || !((*list)->next))
		return;
	curr = (*list)->next;
	while (curr)
	{
		next = curr->next;
		while (curr->prev && curr->n < curr->prev->n)
		{
			prev = curr->prev;
			if (curr->next)
				curr->next->prev = prev;
			prev->next = curr->next;
			curr->next = prev;
			curr->prev = prev->prev;
			prev->prev = curr;
			if (curr->prev)
				curr->prev->next = curr;
			else
				*list = curr;
			print_list(*list);
		}
		curr = next;
	}
}
