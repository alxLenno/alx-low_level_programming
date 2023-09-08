#include<stdio.h>
/**
 * main - Prints sizes of datatypes
 * Return: 0 (Success)
 */
int main(void)
{
	int a;
	long int b;
	long long int d;
	float f;
	char c;

	printf("Size of a char: %lu byte(s)", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)", (unsigned long)sizeof(a));
	printf("Size of a long int: %lu byte(s)", (unsigned long)sizeof(b));
	printf("Size of a long long int: %lu byte(s)", (unsigned long)sizeof(d));
	printf("Size of a float: %lu byte(s)", (unsigned long)sizeof(f));

	return (0);
}
