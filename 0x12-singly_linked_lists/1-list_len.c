#include "lists.h"
/**
 * list_len - returns elements
 * @h: pointer
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t y;

	y = 0;
	while (h != NULL)
	{
		h = h->next;
		y++;
	}
	return (y);
}
