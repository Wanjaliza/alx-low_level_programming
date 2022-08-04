#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
* print_numbers - function that prints numbers, followed by a new line
* @separator: string to be printed between numbers
* @n: number of integers passed to the function
* @...: A variable number of numbers to be printed.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int num;

	va_start(args, n);

	for (num = 0; num < n; num++)
	{
		printf("%d", va_arg(args, int));

		if (num != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
