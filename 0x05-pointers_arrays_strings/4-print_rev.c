#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * followed by a new line
 * @s: string to be printed
 */

void print_rev(char *s)
{
	int i = 0;
	int y;


	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;
	for (y = i; y > 0; y--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
