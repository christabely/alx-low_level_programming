#include "lists.h"
/**
 * free_listint2 - frees list
 * @head: pointer
 * Return: NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *p;
	listint_t *rr;

	if (head != NULL)
	{
		rr = *head;
		while ((p = rr) != NULL)
		{
			rr = rr->next;
			free(p);
		}
		*head = NULL;
	}
}
