#include "lists.h"
/**
 * add_node_end - adds new node
 * @head: linked list
 * @str: string
 * Return: address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *m, *t;
	size_t y;

	m = malloc(sizeof(list_t));
	if (m == NULL)
		return (NULL);

	m->str = strdup(str);

	for (y = 0; str[y]; y++)
		;

	m->len = y;
	m->next = NULL;
	t = *head;

	if (t == NULL)
	{
		*head = m;
	}
	else
	{
		while (t->next != NULL)
			t = t->next;
		t->next = m;
	}
	return (*head);
}
