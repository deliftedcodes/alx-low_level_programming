#include <stdio.h>

/**
 * main - Entry
 *
 * Return: 0
 */

int main(void)
{
	int i, j, k;

	for (i = '0'; i < '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			for (k = j + 1; k <= '9'; k++)
			{
				if (i != j && i != k)
				{
					putchar(i);
					putchar(j);
					putchar(k);

					if (i == '7' && j == '8' && k == '9')
						continue;
				}
					putchar(',');
					putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
