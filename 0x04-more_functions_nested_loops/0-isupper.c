#include <ctype.h>

/**
 * _isupper - funcyion that checks for uppercase characters
 *@c: int to check for uppercase char
 * Return: 1 if true, otherwise 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
