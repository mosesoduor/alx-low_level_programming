#include "main.h"
/**
 * _memset - a  function that fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * @s: memory pointer
 * @b: costant byte
 * @n: number of bytes to be filled
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int j = 0;

	for (; n > 0; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}
