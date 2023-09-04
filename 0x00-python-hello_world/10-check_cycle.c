#include "lists.h"

/**
 * check_cycle - finds if a linked list has a cycle
 * @list: linked list to find
 *
 * Return: 1 if the list contains cycle, 0 if it doesn't
 */
int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	if (!list)
		return (0);

	while (slow && fast && fast->nxt)
	{
		slow = slow->nxt;
		fast = fast->nxt->nxt;
		if (slow == fast)
			return (1);
	}

	return (0);
}
