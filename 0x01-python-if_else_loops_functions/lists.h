#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct listint_s - this is singly linked list
 * @w: our integer
 * @nxt:this points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int w;
	struct listint_s *nxt;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint_end(listint_t **head, const int w);
void free_listint(listint_t *head);
listint_t *insert_node(listint_t **head, int numb);

#endif /* LISTS_H */
