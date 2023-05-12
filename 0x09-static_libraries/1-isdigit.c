#include "main.h"
/**
*_isdigit - checks for digit
*@c: char
*Return: returns 1 if uppercase else 0
*/

int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
return (1);

return (0);
}
