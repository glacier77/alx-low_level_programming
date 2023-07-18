`#include "main.h"
/**
 * print_last_digit - Prints the last digit of a num
 *
 * @n: input num as an int
 *
 * Return: last digit.
 */
int print_last_digit(int)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
