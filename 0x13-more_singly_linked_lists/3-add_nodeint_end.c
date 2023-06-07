#include "lists.h"
/**
 * add_nodeint_end - creates new node
 * @head: pointer
 * @n: element
 * Return: to element address else NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nd, *p;

	(void)p;

	nd = malloc(sizeof(listint_t));
	if (nd == NULL)
		return (NULL);

	nd->n = n;
	nd->next = NULL;
	p = *head;

	if (*head == NULL)
	{
		*head = nd;
	}
	else
	{
		while (p->next != NULL)
		{
			p = p->next;
		}
		p->next = nd;
	}

	return (*head);
}
