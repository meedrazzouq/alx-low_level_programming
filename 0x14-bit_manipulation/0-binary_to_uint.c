#include "main.h"
/**
 *  binary_to_uint - converts a binary number to an unsigned int
 *  @b: string containing the binary number
 *  Return: the decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int i;

	if (!b)
	{
		return (0);
	}
	else
	{
		for (i = 0; b < strlen(b); i++)
		{
			if (b[i] < '0' || b[i] > '1')
				return (0);
			decimal = 2 * dec_val + (b[i] - '0');
		}
	}
	return (decimal);
}

