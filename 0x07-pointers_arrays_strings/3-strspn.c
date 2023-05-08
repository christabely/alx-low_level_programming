/**
* _strspn - prefix substring lenght
* @s: String for subtraction
* @accept: Substring to match
* Return: integer
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int d = 0;

	char *j = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				d++;
				break;
			}
		if (!(*--accept))
			break;
		accept = j;
	}
	return (d);
}
