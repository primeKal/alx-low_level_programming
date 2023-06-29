#include <stdio.h>
#include <unistd.h>

/**
 * main - prints some text exactlly
 *
 * Return: 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2025-10-19\n", 59);
	return (1);
}
