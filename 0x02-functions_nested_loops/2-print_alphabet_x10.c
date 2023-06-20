#include "main.h"

/**
 * print_alphabet_x10 - Print alphabets 10x
 */

void print_alphabet_x10(void)
{
	char letter;
	int i;

	i = 0;
	while (i < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		i++;
	}
}
