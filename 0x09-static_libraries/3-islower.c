#include "main.h"

/**
 * _islower - show 0 or 1 for upper and lower case letters
 *
 * @c: character in ascii
 *
 * Return: 1 or 2
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
