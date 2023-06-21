#include "main.h"
/**
 * print_alphabet_x10 - print alphabets 10 times in lower case
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0;

	for (i = 0; i < 9; i++)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
