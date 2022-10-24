#include "lists.h"

/**
 * print_lists -> prints lists of size_t
 * @h: pointer arg
 *
 * Return:number of  nodes
 */
size_t print_list(const list_t *h)
{
	int count;

	count = 0;

	while (h != NULL)
	{

	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%d] %s\n", h->len, h->str);
	h = h->next;
	count++;

	}
	return (count);


}
