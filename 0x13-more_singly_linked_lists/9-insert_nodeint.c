#include "lists.h"
/**
 * insert_nodeint_at_index - insert nod
 * @head: pointer
 * @idx: index
 * @n: integer
 * Return: to node else NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *nw, *k;

	k = *head;

	if (idx != 0)
	{
		for (j = 0; j < idx - 1 && k != NULL; j++)
		{
			k = k->next;
		}
	}

	if (k == NULL && idx != 0)
		return (NULL);

	nw = malloc(sizeof(listint_t));
	if (nw == NULL)
		return (NULL);

	nw->n = n;

	if (idx == 0)
	{
		nw->next = *head;
		*head = nw;
	}
	else
	{
		nw->next = k->next;
		k->next = nw;
	}

	return (nw);
}
