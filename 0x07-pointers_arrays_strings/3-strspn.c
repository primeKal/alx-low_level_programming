#include "main.h"


/**
 * *_strspn - gets length of a prefix substring
 * @s: string to check
 * @accept: string containing the list of chr to match s
 *
 * Return: number of butes in intial segement
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, f, flag;

	
	f = 0;

	for (i = 0; s[i] != '\0'; j++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				f++;
				flag = 1;
			}
		}
		if (flag == 0)
			return  (f);
	}


	return (0);
}
