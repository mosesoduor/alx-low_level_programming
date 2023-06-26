#include "main.h"

/**
 * _atoi - a function that convert a string to an integer
 * @s: the string char to be converted
 * Return: 0
 */

int _atoi(char *s)
{
	int a, b, c, x, y, z;

	a = 0;
	b = 0;
	c = 0;
	x = 0;
	y = 0;
	z = 0;

	while (s[x] != '\0')
		x++;
	while (a < x && y == 0)
	{
		if (s[a] == '-')
			++b;
		if (s[a] >= '0' && s[a] <= '9')
		{
			z = s[a] - '0';
			if (b % 2)
				z = -z;
			c = c * 10 + z;
			y = 1;

			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			y = 0;
		}
		a++;
	}
	if (y == 0)
		return (0);
	return (c);
}
