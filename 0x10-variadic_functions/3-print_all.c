#include "variadic_functions.h"
/**
 * print_all - prints all
 * @format: argument type
 * Return: 0 success
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int k = 0, j, c = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(valist, format);
	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[k] == t_arg[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[k])
		{
		case 'c':
			printf("%c", va_arg(valist, int)), c = 1;
			break;
		case 'k':
			printf("%d", va_arg(valist, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(valist, double)), c = 1;
			break;
		case 's':
			str = va_arg(valist, char *), c = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} k++;
	}
	printf("\n"), va_end(valist);
}
