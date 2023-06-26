#include <stdio.h>

/**
 * main - Entry
 *
 * Return: 0
 */

int main(void)
{
	char i = 'a', j = 'A';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}

	while (j <= 'Z')
	{
		putchar(j);
		j++;
	}
	putchar('\n');

	return (0);
}
