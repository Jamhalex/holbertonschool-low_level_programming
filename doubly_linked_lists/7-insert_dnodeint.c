#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given index
 * @h: double pointer to the head of the list
 * @idx: index at which to insert the new node (starts at 0)
 * @n: integer value to store in the new node
 *
 * Return: address of the new node, or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	/* insert at head */
	if (idx == 0)
		return (add_dnodeint(h, n));

	temp = *h;

	/* traverse to the node before insertion position */
	while (temp != NULL && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}

	/* idx out of bounds (middle insertion impossible) */
	if (temp == NULL)
		return (NULL);

	/* insert at end */
	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	/* allocate new node for middle insertion */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	/* rewire pointers */
	new->next = temp->next;
	new->prev = temp;
	temp->next->prev = new;
	temp->next = new;

	return (new);
}

