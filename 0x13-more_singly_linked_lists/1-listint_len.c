#include "lists.h"
/**
 * listint_len - returns elements num
 * @h: pointe head
 * Return: bits
 */
size_t listint_len(const listint_t *h)
{
	size_t node_s = 0;

	while (h != NULL)
	{
		h = h->next;
		node_s++;
	}
	return (node_s);
}
