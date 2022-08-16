#include "sort.h"


void insertion_sort_list(listint_t **list)
{
	listint_t *tmp, *grt, *current;

	current = NULL;
	grt = NULL;
	if (!list)
		return;
	current = (*list)->next;

	tmp = malloc(sizeof(listint_t));
	if (!tmp)
		return;
	printf("tmp created\n");

	while (current)
	{
		printf("current: %d\n", current->n);
		printf("current prev: %d\n", current->prev->n);
		if (current->prev->n > current->n)
		{
			tmp = current;
//			printf("tmp: %d\n", tmp->n);
			grt = current->prev;
//			printf("grt: %d\n", grt->n);
			current = current->next;
//			printf("new current: %d\n", current->n);
			current->prev = grt;
			grt->next = current;
//			printf("list after pop: ");
//			print_list(*list);

			tmp->prev = grt->prev;
			grt->prev = tmp;
			grt->prev->next = tmp;
			tmp->next = grt;
			printf("tmpPrev->tmp->tmpNext = %d->%d->%d\n", tmp->prev->n, tmp->n, tmp->next->n);
			printf("grtPrev->grt->grtNext = %d->%d->%d\n", grt->prev->n, grt->n, grt->next->n);
			//	printf("tmp %d\n", tmp->prev-n);
			printf("list after insert: ");
			print_list(**list);
		}
		else
			current = current->next;
		print_list(*list);
	}

/*	free(tmp); */
}
