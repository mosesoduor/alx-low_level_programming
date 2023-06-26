#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that generates random valid passwords
 * for the program 101-crackme
 *
 * Return: 0
 */

int main(void)
{
	int x[100];
	int a, b, c;

	b = 0;

	srand(time(NULL));
	for (a = 0; a < 100; a++)
	{
		x[a] = rand() % 78;
		b += (x[a] + '0');
		putchar(x[a] + '0');

		if ((2772 - b) - '0' < 78)
		{
			c = 2772 - b - '0';
			b += c;
			putchar(c + '0');
			break;
		}
	}
	return (0);
}
