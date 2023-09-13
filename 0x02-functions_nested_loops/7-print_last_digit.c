#include "main.h"

/**
 * print_last_digit - Prints the last digit
 * @a: the integer used
 * Return: the last digit
 */

int print_last_digit(int a)
{
	if (a < 0)
	{
		_putchar(-(a % 10) + '0');
		return (-(a % 10));
	}
	_putchar((a % 10) + '0');
	return (a % 10);
}
