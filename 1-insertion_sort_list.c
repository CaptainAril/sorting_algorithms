#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm.
 * @list: linked list to be sorted.
 *
 * Description: Prints the list after each time two elements are swapped.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *tmp, *pos;

	if (!list || !(*list) || !(*list)->next)
		return;
	current = (*list)->next;

	while (current)
	{
		pos = current->prev;
		tmp = current;
		current = current->next;

		while (pos && pos->n > tmp->n)
		{
			pos->next = tmp->next;
			if (tmp->next)
				tmp->next->prev = pos;
			tmp->next = pos;
			tmp->prev = pos->prev;
			if (pos->prev)
				pos->prev->next = tmp;

			pos->prev = tmp;
			pos = tmp->prev;
			if (!pos)
				*list = tmp;

			print_list(*list);
		}
	}
}
