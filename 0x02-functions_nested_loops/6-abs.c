#include "main.h"
/**
 * _abs -  a function that computes the absolute value of an integer.
 * @n: parameter data type
 * Return: int
 */
int _abs(int n)
{
	if (n < 0)
	{
		int abs_value;

		abs_value = n * -1;
		return (abs_value);
	}
	else
	{
		return (n);
	}
}

