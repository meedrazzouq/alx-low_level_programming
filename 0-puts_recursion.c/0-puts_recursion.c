#include "main.h"
/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s: the string to be passed
 * Return: void
 */
void _puts_recursion(char *s)
{
	while (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	_putchar('\n');
}
