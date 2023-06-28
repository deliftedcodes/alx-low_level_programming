#include "main.h"

/**
 * _abs - returns absolute value of an int
 * @n: parameter
 * Return: 0 on success
 */

int _abs(int n)
{
	if (n < 0)
		return (n = n * -1);
	else
		return (n);
}
