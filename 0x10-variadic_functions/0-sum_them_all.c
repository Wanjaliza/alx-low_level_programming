#include <stdarg.h>
#include "variadic_functions.h"
/**
* sum_them_all - function that returns the sum of all its parameters.
* @n: number of paramters passed to the function
* @...: variable no of parameters
* Return: 0 or sum
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int num, sum = 0;

	if (n == 0)
		return (0);
	va_start(args, n);

	for (num = 0; num < n; num++)
		sum = sum + va_arg(args, int);

	va_end(args);
	return (sum);
}
