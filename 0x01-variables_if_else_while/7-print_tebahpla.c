#include <stdio.h>

/**
 * main - Prints alphabet in lower case
 * Return: 0 (Success)
 */
int main(void)
{
	char alpha = 'z';

	do {
		putchar(alpha);
		alpha -= 1;
	} while (alpha >= 'a');
	putchar('\n');
	return (0);
}
