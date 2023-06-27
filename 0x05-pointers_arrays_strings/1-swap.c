#include "main.h"

/**
 * swap_int - swap 2 integers
 * @a: first int
 * @b: second int
 * Return: nop
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
