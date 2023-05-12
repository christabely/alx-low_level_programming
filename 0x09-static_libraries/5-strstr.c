#include "main.h"
/**
* _strstr - string location
* @haystack: string of char
* @needle: string to char
* Return: void
*/
char *_strstr(char *haystack, char *needle)
{
	char *r = haystack, *g = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (r);
		}
		needle = g;
		r++;
		haystack = r;
	}
	return (0);
}
