#include <stdio.h>

/**
 * main - reverse alphabets
 *
 * Return: zero
 */
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
