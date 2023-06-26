#include "main.h"
/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line
 * @str: string character to be printed
 */

void puts2(char *str)
{
	int a = 0;
	int b = 0;
	char *c = str;
	int d;

	while (*c != '\0')
	{
		c++;
		a++;
	}
	b = a - 1;
	for (d = 0; d <= b; d++)
	{
		if (d % 2 == 0)
			_putchar(str[d]);
	}
	_putchar('\n');
}
