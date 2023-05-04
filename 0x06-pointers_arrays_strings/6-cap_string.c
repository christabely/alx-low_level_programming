#include "main.h"
/**
 * cap_string - capitalize string words
 * @s: string
 * Return: to s destination
 */
char *cap_string(char *s)
{
	int z = 0, k;

	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + z) >= 97 && *(s + z) <= 122)
		*(s + z) = *(s + z) - 32;
	z++;
	while (*(s + z) != '\0')
	{
		for (k = 0; k < 13; k++)
		{
			if (*(s + z) == sep_words[k])
			{
				if ((*(s + (z + 1)) >= 97) && (*(s + (z + 1)) <= 122))
					*(s + (z + 1)) = *(s + (z + 1)) - 32;
				break;
			}
		}
		z++;
	}
	return (s);
}
