#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings -function with 3 parameters
 * @separator: char type pointer to string
 * @n: unsigned int type
 *
 * Return: string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *ptr;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(ap, char*);
		if (ptr != NULL)
			printf("%s", ptr);
		else
			printf("(nil)");
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
