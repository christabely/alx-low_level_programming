#include "main.h"
/**
 * rot13 - encodes string with rot13
 * @s: string
 * Return: to destination s
 */
char *rot13(char *s)
{
	int v = 0, z;

	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + v) != '\0')
	{
		for (z = 0; z < 52; z++)
		{
			if (*(s + z) == alphabet[z])
			{
				*(s + v) = rot13[z];
				break;
			}
		}
		v++;
	}
	return (s);
}
