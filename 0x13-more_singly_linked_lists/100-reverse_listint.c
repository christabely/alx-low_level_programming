#include "lists.h"
/**
 * reverse_listint - reverses list
 * @head: pointer
 * Return: to node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *j, *m;

	j = NULL;
	m = NULL;

	while (*head != NULL)
	{
		m = (*head)->next;
		(*head)->next = j;
		j = *head;
		*head = m;
	}

	*head = j;
	return (*head);
}
