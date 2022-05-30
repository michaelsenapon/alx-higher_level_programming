#include "lists.h"

/**
 * check_cycle - check if linked list is cycle
 * @list: type listint_t
 * Return: 0 if theres no cycle and 1 if there is
 */

int check_cycle(listint_t *list)
{
	listint_t *heady = list, *hare = list;

	while (heady != NULL && hare != NULL && hare->next != NULL)
	{
		heady = heady->next;
		hare = hare->next->next;
		if (heady == hare)
			return (1);
	}
	return (0);
}
