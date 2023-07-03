#include "main.h"


/**
 * *_memset - fills memeory with constatn type
 * @s: memory to be filled
 * @b: char to copy
 * @n: number if times to copy n
 *
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}


	return (s);
}
