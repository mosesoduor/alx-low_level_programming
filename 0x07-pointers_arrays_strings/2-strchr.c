#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: string to find the character
 * @c: character
 * Return: a pointer
 */

char *_strchr(char *s, char c)
{
	int x = 0;
	for (; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}
	return (0);
}
