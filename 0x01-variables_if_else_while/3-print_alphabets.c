#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char Alphabets;

	for (Alphabets = 'a'; Alphabets <= 'z'; Alphabets++)
	{
		putchar(Alphabets);
	}
	for (Alphabets = 'A'; Alphabets <= 'Z'; Alphabets++)
	{
		putchar(Alphabets);
	}
	putchar('\n');

	return (0);
}
