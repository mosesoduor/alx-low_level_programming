#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char Alphabt;

	for (Alphabt = 'a'; Alphabt <= 'z'; Alphabt++)
	{
		if (Alphabt != 'q' && Alphabt != 'e')
	{
		putchar(Alphabt);
	}
	}
	putchar('\n');

	return (0);
}
