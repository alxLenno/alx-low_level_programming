#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		_putchar(('0' - n));
	}
	else
	{
		_putchar('0' + n);
	}
}
