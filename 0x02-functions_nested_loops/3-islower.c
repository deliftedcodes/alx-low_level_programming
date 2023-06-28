#include "main.h"

/**
 * _islower - checks if a char is lower case
 * @c: parameter
 * Return: 1 if true, 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);

}


