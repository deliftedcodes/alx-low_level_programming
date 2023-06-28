#include "main.h"

/**
 * print_to_98 - function to print numbers from given n to 98
 * @n: first parameter
 *
 * Return: 0 on success
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);

			if (n != 98)
				printf(", ");
			n++;
		}
		printf("\n");
	}

	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);

			if (n != 98)
				printf(", ");
			n--;
		}
		printf("\n");
	}
	else
	{
		printf("%d", n);
		printf("\n");
	}

}
