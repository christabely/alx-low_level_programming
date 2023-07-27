#include "main.h"
/**
 * _abs - computes value of integer
 * @i: accepts input values
 * Return: 0
*/
int _abs(int i)
{
	/**
	 * if int value is a negative
	 * multiply by -1 to get a positive value
	*/
	if (i < 0)
		i = (-1) * i;

	return (i);

}
