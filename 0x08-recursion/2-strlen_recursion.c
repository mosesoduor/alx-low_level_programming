#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: input
 * Return: the length of a string
 */

int _strlen_recursion(char *s)
{
	int y = 0;

	if (*s)
	{
		y++;
		y += _strlen_recursion(s + 1);
	}
	return (y);
}
