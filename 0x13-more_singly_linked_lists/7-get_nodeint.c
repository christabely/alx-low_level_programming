#include "lists.h"
/**
 * get_nodeint_at_index - returns node
 * @head: pointer
 * @index: node to access
 * Return: to node, else NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;

	for (j = 0; j < index && head != NULL; j++)
	{
		head = head->next;
	}

	return (head);
}
