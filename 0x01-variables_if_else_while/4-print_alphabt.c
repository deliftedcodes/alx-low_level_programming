#include <stdio.h>

/**
 * main - Entry
 *
 * Return: 0
 */

int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		if (i == 'e' || i == 'q')
		{
			i = i + 1;
			continue;
		}
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
