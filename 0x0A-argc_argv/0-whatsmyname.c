#include <stdio.h>
#include "main.h"
/**
 * main - function that print the name of the program itself
 * @argc: the arguement that count the agruementes passed
 * @argv: the argument that contains the passed arguments
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv[0];
	printf("%s\n", argv[0]);
	return (0);
}
