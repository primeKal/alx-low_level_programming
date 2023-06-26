#include "main.h"

/**
 * _isalpha - shows 1 or 0
 *
 * @c: character in ascii
 *
 * Return: 1 or zero for letters and rest
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
