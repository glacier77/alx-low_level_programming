#include "main.h"
/**
 * _islower - nested loop lower case
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for lowercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
