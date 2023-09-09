#include <stdio.h>

/**
 * main - Prints alphabet in lower case
 * Return: 0 (Success)
 */
int main(void)
{
	char alpha = 'a';
	char alpha_upper = 'A';

	do {
		putchar(alpha);
		alpha += 1;
	} while (alpha <= 'z');

	do {
		putchar(alpha_upper);
		alpha_upper += 1;
	} while (alpha_upper <= 'Z');

	putchar('\n');
	return (0);
}
