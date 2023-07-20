#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all -  a function that returns the sum of all its parameters.
 * @n: the counter of the variable arguments
 * Return: int (sum of the entered numbers)
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;

	va_start(arg, n);
	int i;

	int s;

	for (i = 0; i < n; i++)
	{
		s += va_arg(arg, int);
	}
	va_end(arg);
	return (s);
}
