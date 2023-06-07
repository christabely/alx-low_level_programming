#include "lists.h"
/**
 * sum_listint - returns data sum
 * @head: pointer
 * Return: sum of n
 */
int sum_listint(listint_t *head)
{
	int i;

	i = 0;
	while (head != NULL)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
