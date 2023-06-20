#include <stdio.h>

/**
 * main - Entry pont
 *
 * Return: Always o (Success)
 */

int main(void)
{
	int i;
	unsigned long int x, y, next, sum;

	x = 1;
	y = 2;
	sum = 0;
	for (i = 1; i <= 33; ++i)
	{
		if (x < 4000000 && (x % 2) == 0)
		{
			sum = sum + x;
		}
		next = x + y;
		x = y;
		y = next;
	}

	printf("%lu\n", sum);

	return (0);
}
