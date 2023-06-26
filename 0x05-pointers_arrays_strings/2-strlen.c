#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: character to print its length
 * Return: string length
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
