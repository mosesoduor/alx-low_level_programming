#include <stdio.h>
/**
 * main - program that computes and prints the sum of all the multiples
 * of 3 or 5 below 1024
 * Return: Always 0 (Success)
 */

int main(void)
{
	int y, sum = 0;

	for (y = 0; y < 1024; y++)
	{
		if ((y % 3) == 0 || (y % 5) == 0)
			sum += i;
	}
	printf("%d\n", sum);

	return (0);
}