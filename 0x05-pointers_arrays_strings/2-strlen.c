#include "main.h"

/**
 * _strlen - returnslength
 * @s: string
 * Return: int(length)
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
