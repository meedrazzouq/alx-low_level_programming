#include "main.h"
/**
 * swap_int -  a function that swaps the values of two integers.
 * @a: number to be swaped
 * @b: number to be swaped
 * Returnn: void
 */
void swap_int(int *a, int *b)
{
	int var;

	var = *a;
	*a = *b;
	*b = var;
}
