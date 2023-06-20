#include "_putchar.c"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	const char *message = "_putchar\n";
	const char *i = message;

	while (*i != '\0')
	{
		_putchar(*i);
		i++;
	}
	return (0);
}
