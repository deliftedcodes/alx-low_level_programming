#include "main.h"

/**
 * _isalpha - checks if a char is lower case
 * @c: parameter
 * Return: 1 if true, 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);

}


