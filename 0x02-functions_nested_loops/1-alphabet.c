#include <stdio.h>
#include "main.h"


/**
 * print_alphabet - Prints alphabets
 * Return: void
 */

void print_alphabet()
{
	int i;

	for ( i = 97;i < 123;i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return;

}
