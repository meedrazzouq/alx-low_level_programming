#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14.
 * Return: void
 */
void more_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		int j;

		for (j = 0; j < 15; j++)
		{
			_putchar(j + '0');
		}
		_putcahr('\n');
		i++;
	}
}
