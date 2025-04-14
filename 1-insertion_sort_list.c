#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "sort.h"

/**
 * insertion_sort_list- function that sorts a doubly
 * linked list of integers in ascending order
 * @list: listint_t
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp, *a, *b;

	if (!list || !(*list) || !(*list)->next)
		return;

	current = (*list)->next;

	while (current)
	{
		temp = current;
		while (temp->prev && temp->n < temp->prev->n)
		{
			a = temp->prev;
			b = temp;
			a->next = b->next;
			if (b->next)
				{b->next->prev = a;}
			b->prev = a->prev;
			b->next = a;
			if (a->prev)
				{a->prev->next = b;}
			else
				*list = b;
			a->prev = b;
			print_list(*list);
			}
		current  = current->next;
	}
}
