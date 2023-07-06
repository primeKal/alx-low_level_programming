#include "main.h"

int actual_sqrt_recursion(int n, int i);


/**
 * _sqrt_recursion - returns square root
 * @n: inout int
 *
 * Return: the result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recures to find sqrt root
 * @n: inout number
 * @i: iterator
 *
 * Return: sqrt root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
