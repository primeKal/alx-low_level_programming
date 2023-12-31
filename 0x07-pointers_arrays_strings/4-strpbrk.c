#include "main.h"
#include <stdio.h>


/**
 * *_strpbrk - searches a string from bytes
 * @s: input string
 * @accept: string to look from
 *
 * Return: pointer to the byte in s that matches accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
				return (s);
		}
		s++;
	}


	return (NULL);
}
