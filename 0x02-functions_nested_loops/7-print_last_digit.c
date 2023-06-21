#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number.
 *@n: paramater of the function
 *Return: int
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 10)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
