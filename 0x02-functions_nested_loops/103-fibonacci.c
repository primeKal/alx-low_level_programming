#include <stdio.h>

/**
 * main - prints 50 fibonacci numbers
 * Return: zero
 */
int main(void)
{
	int i;
	unsigned long int sum, j, k, next;

	j = 1;
	k = 2;
	sum = 0;


	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
			sum = sum + j;
		next = j + k;
		j = k;
		k = next;
	}
	printf("%lu\n", sum);

	return (0);
}
