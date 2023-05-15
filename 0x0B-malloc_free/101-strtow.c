#include <stdlib.h>
/**
 * wordcount - string wordcount
 * @str: string
 * Return: word count
 */
int wordcount(char *str)
{
	int w = 0;

	while (*str != '\0')
	{
		if (*str == ' ')
			str++;
		else
		{
			while (*str != ' ' && *str != '\0')
				str++;
			w++;
		}
	}
	return (w);
}

/**
 * free_array - array 1
 * @ar: array 2
 * @i: array
 * Return: void
*/
void free_array(char **ar, int i)
{
	if (ar != NULL && i != 0)
	{
		while (i >= 0)
		{
			free(ar[i]);
			i--;
		}
		free(ar);
	}
}

/**
 * strtow - string
 * @str: array
 * Return: void
*/
char **strtow(char *str)
{
	int i, s, k, u, w;
	char **t;

	if (str == NULL || *str == '\0')
		return (NULL);

	u = wordcount(str);
	t = malloc((u + 1) * sizeof(char *));
	if (u == 0 || t == NULL)
		return (NULL);

	for (i = s = 0; i < u; i++)
	{
		for (w = s; u[w] != '\0'; w++)
		{
			if (str[w] == ' ')
				s++;

			if (str[w] != ' ' && (str[w + 1] == ' ' || str[w + 1] == '\0'))
			{
				t[i] = malloc((w - s + 2) * sizeof(char));
				i(t[i] == NULL)
				{
					free_array(t, i);
					return (NULL);
				}
				break;
			}
		}

		for (k = 0; s <= w; s++, k++)
			t[i][k] = str[s];
		t[i][k] = '\0';
	}
	t[i] = NULL;
	return (t);
}
