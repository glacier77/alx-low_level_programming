#include "main.h"
/**
 * print_sign - Determine if the input num is greater, equal or less zero
 *
 * @n: The input num as an int
 *
 * Return: 1 is greater than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
