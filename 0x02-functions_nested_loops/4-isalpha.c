#include "main.h"
/**
 *_isalpha - check for letters in uppercase
 *@c: input.
 *
 *Return: 1 if c is uppercase else 0
 */
int _isalpha(int c)
{
if ((c >= 'A' && c <= 'Z') ||
(c >= 'a' && c <= 'z'))
{
return (1);
}
else
{
return (0);
}
}
