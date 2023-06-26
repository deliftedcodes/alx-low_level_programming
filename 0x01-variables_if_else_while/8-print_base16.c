#include <stdio.h>

/**
 * main - Entry
 *
 * Return: 0
 */

int main(void)
{
	char i = '0', j = 'a';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}

	while (j <= 'f')
	{
		putchar(j);
		j++;
	}
	putchar('\n');

	return (0);
}
