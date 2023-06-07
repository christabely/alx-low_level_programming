#include "lists.h"
/**
 * print_listint - prints elements
 * @h: pointer
 * Return: nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node_s = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_s++;
	}
	return (node_s);
}
