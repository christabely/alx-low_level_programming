#include "lists.h"
/**
 * print_list - prints list_t
 * @h: string
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t y;

	y = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		y++;
	}
	return (y);
}
