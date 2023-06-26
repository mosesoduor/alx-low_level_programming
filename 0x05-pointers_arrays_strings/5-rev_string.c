#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	char reverse = s[0];
	int i = 0;
	int y;

	while (s[i] != '\0')
		i++;
	for (y = 0; y < i; y++)
	{
		i--;
		reverse = s[y];
		s[y] = s[i];
		s[i] = reverse;
	}
}
