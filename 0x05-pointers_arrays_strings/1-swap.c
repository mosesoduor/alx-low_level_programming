#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 * @a: int to swap with b
 * @b: int to swap with a
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
