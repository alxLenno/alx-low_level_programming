#include <stdio.h>

/**
 * main - Prints alphabets
 * Return: 0
 */

int main(void)
{
	print_alphabet();

	return (0);
}
/**
 * print_alphabet - Prints alphabets
 * Return: void
 */

void print_alphabet()
{
	int i = 65;

	for ( i;i < 97;i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return;

}
