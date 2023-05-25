#include "variadic_functions.h"
/**
 * print_strings - prints strings.
 * @separator: string to be printed
 * @n: strings passed
 * Return: 0 success
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int j;
	char *str;

	va_start(valist, n);

	for (j = 0; j < n; j++)
	{
		str = va_arg(valist, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (j < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
