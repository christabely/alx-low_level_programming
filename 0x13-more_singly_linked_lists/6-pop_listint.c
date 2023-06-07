#include "lists.h"
/**
 * pop_listint - deletes node
 * @head: pointer
 * Return: node data
 */
int pop_listint(listint_t **head)
{
	int fnode;
	listint_t *p;
	listint_t *rr;

	if (*head == NULL)
		return (0);

	rr = *head;
	fnode = rr->n;
	p = rr->next;

	free(rr);

	*head = p;

	return (fnode);
}
