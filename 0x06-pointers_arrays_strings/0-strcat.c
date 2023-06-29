#include "main.h"
/**
 * _strcat -  a function that concatenates two strings.
 * @dest: string to be concatenated
 * @src: string to be concatenated
 * Return:char as the reslut of the concatenation
 */
char *_strcat(char *dest, char *src)
{
	char *result;

	result = strcat(dest, src);
	return (result);
}
