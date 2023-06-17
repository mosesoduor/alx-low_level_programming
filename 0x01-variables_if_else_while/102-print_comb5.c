#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, b, c, d;

	for (a = 0; a <= 9; a++)
	{
	for (b = 0; b <= 9; b++)
	{
	for (c = 0; c <= 9; c++)
	{
	for (d = 0; d <= 9; d++)
	{
		if (a <= c && a >= b && b <= c && d > 0 && b < d)
		{
			putchar(a + '0');
			putchar(b + '0');
			putchar(' ');
			putchar(c + '0');
			putchar(d + '0');
			putchar(',');
			putchar(' ');
		}
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
