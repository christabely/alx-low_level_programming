#include "lists.h"
/**
 * delete_nodeint_at_index - delete nod
 * @head: pointer
 * @index: index
 * Return: 1 else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int k;
	listint_t *pv, *next;

	pv = *head;

	if (index != 0)
	{
		for (k = 0; k < index - 1 && pv != NULL; k++)
		{
			pv = pv->next;
		}
	}
	if (pv == NULL || (pv->next == NULL && index != 0))
	{
		return (-1);
	}
	next = pv->next;

	if (index != 0)
	{
		pv->next = next->next;
		free(next);
	}
	else
	{
		free(pv);
		*head = next;
	}
	return (1);
}
