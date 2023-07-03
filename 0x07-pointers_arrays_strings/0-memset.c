#include "main.h"
/**
 * _memset -  a function that fills memory with a constant byte.
 * @s: memory area to be filled
 * @b: the value that used to fill the area reserved
 * @n:bytes
 * Return: pointee
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	for (i = 0; i < n; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
