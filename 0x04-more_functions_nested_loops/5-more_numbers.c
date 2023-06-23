#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14.
 * Return: void
 */
void more_numbers(void)
{
	int i;

	i = 0;
	while (i < 15)
	{
		int j;

		for (j = 0; j < 10; j++)
		{
			_putchar('0' + i);
		}
		_putcahr('\n');
		i++;
	}
}
