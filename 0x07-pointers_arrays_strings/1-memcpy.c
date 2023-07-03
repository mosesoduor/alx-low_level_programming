#include "main.h"
/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 * @dest: memory area to copy data to
 * @src: memory area to copy data from
 * @n: number of bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int j = n;

	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
