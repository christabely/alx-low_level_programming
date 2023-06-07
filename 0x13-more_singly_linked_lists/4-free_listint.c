#include "lists.h"
/**
 * free_listint - frees linked list
 * @head: pointer
 * Return: NULL
 */
void free_listint(listint_t *head)
{
	listint_t *p;

	while ((p = head) != NULL)
	{
		head = head->next;
		free(p);
	}
}
