#include <stdio.h>

/**
 * main - pprint combination of numbers
 *
 * Return: zero
 */
int main(void)
{
	int i, f, h, j, param1, param2;

	i = f = h = j = 48;
	while (j < 58)
	{
		h = 48;
		while (h < 58)
		{
			f = 48;
			while (f < 58)
			{
				i = 48;
				while (i < 58)
				{
					param1 = (j * 10) + h;
					param2 = (f * 10) + i;
					if (param1 < param2)
					{
						putchar(j);
						putchar(h);
						putchar(' ');
						putchar(f);
						putchar(i);
						if (j == 57 && h == 56 && f == 57 && i == 57)
							break;
						
						putchar(',');
						putchar(' ');
					}
					i++;
				}
				f++;
			}
			h++;
		}
		j++;
	}
	putchar('\n');
	return (0);
}
