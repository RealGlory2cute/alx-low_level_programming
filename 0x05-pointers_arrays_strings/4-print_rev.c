#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: input string.
 * Return: Alwaays 0.
 */
void print_rev(char *s)
{
	int count = 0;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		coun++;
	}

	for (count--; count >= 0; count--)
		_putchar(s[count]);
	_putchar('\n');
	return (0);
}
