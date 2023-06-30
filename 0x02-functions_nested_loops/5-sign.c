#include "main.h"

/**
 * print_sign - prints the sign of integers
 * @n: the int
 * Return: 1 or 0 or -1 depending on the int
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
