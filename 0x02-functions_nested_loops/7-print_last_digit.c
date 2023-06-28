#include "main.h"

/**
 * print_last_digit - returns absolute value of an int
 * @n: parameter
 * Return: 0 on success
 */

int print_last_digit(int n)
{
	int a;

	if (n < 0)
		a = -1 * (n % 10);
	else
		a = n % 10;

	_putchar((a % 10) + '0');
	return (a % 10);
}
