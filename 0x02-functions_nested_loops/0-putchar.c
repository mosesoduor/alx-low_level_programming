#include <unistd.h>

/**
 * _putchar - writes the character c to the stdout
 * @c: the character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and the errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	const char *message = "_putchar\n";

	const char *i = message;

	while (i != '\0')
	{
		_putchar(*i);
		i++;
	}
	return (0);
}
