#include "main.h"

/**
 * main - Prints putchar
 *
 * Retur: 0
 */
int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int count, size;

	size = sizeof(str) / sizeof(int);
	for (count = 0; count < size
