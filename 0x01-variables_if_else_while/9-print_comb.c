#include <stdio.h>

/**
 * main - Entry
 *
 * Return: 0
 */

int main(void)
{
	char i = '0';

	while (i <= '9')
	{
		putchar(i);

		if (i == '9')
			break;
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');

	return (0);
}
