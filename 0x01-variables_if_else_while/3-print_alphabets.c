#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpLowerCase[26] = "abcdefghijklmnopqrstuvwxyz";
	char alpUpperCase[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alpLowerCase[i]);
		putchar(alpUpperCase[i])
	}
	putchar('\n');
	return (0);
}
i
