#include "main.h"
int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - a function that returns the natural
 * squareroot of a number
 * @n: input
 * Return: squareroot of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - finds the natural sqrt of a number
 * @n: number to find the sqrt of
 * @i: iterator
 * Return: the squareroot
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
