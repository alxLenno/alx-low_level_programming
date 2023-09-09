#include <stdio.h>

/**
 * main - Prints alphabet in lower case
 * Return: 0 (Success)
 */
int main(void)
{
	char alpha = 'a';

	do {
		putchar(alpha);
		alpha += 1;
	} while (alpha <= 'z')
	putchar('\n');
	return (0);
}
