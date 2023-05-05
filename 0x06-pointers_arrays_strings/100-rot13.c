#include "main.h"
/**
 * rot13 - encodes string
 * @s: string soure
 * Return: to s
 */

char *rot13(char *s)
{
int i, x;

char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
for (i = 0; *(s + i); i++)
{
for (x = 0; x < 52; x++)
{
if (a[x] == *(s + i))
{
*(s + i) = b[x];
break;
}
}
}
return (s);
}
