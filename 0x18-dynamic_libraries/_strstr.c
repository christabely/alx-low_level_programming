#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: input substrings
 * @needle: subtring
 * Return: pointer to the beginning of substring else NULL if substring is not found
*/

char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n)
			return (h);
		haystack++;
	}
	return ('\0');
}
