#include "main.h"

/**
 * _strcmp - compares strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: -ve if s1<s2, 0 if equal and +ve if s1>s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
