#include <stdio.h>

/**
 * main - print all base 16 values
 *
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
	}
	for (num = 97; num < 103; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
