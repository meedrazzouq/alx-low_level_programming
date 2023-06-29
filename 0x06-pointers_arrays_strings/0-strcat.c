#include "main.h"
/**
 * _strcat -  a function that concatenates two strings.
 * @dest: string to be concatenated
 * @src: string to be concatenated
 * Return:char as the reslut of the concatenation
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++
	}
	dest[i] = '\0';
	return (dest);
}
