#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;          /* how many nodes we printed */

	while (h != NULL)          /* loop until we reach end of list */
	{
		if (h->str == NULL)    /* if the string is missing */
		{
			printf("[0] (nil)\n");
		}
		else                   /* normal case: print length and string */
		{
			printf("[%u] %s\n", h->len, h->str);
		}

		h = h->next;           /* move to the next node */
		count++;               /* increment node counter */
	}

	return (count);            /* return total nodes printed */
}
