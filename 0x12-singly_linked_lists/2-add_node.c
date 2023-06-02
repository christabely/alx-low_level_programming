#include "lists.h"
/**
 * add_node - adds node
 * @head: linked list
 * @str: string
 * Return: to address
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *m;
	size_t t;

	m = malloc(sizeof(list_t));
	if (m == NULL)
		return (NULL);

	m->str = strdup(str);

	for (t = 0; str[t]; t++)
		;

	m->len = t;
	m->next = *head;
	*head = m;

	return (*head);
}
