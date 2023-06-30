#include "main.h"
/**
 * _strncat - a function that concatenates two strings.
 * @dest: string to be concatenated
 * @src:string to be appended
 * @n: most bytes
 * Return: dest as the result of the concatenation
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, n;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && j != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

