#include "lists.h"

/**
 * insert_node - puts a numb into a singly-linked list.
 * @head: Pointer to the head of the linked list.
 * @numb: The numb to insert.
 *
 * Return: If fxn fails - NULL.
 * Otherwise - Pointer to new node.
 */
listint_t *insert_node(listint_t **head, int numb)
{
	listint_t *node = *head, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->w = numb;

	if (node == NULL || node->w >= numb)
	{
		new->nxt = node;
		*head = new;
		return (new);
	}

	while (node && node->nxt && node->nxt->w < numb)
		node = node->nxt;

	new->nxt = node->nxt;
	node->nxt = new;

	return (new);
}
