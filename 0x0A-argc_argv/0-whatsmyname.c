#include <stdio.h>
#include "main.h"
/**
 * main - function that print the name of the program itself
 * @argc: the arguement that count the agruementes passed
 * @argv: the argument that contains the passed arguments
 * Return: 0 (Success)
 */
int main(int argc, char *argv)
{
	int i;

	for (i = 0; i < argv; i++)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
