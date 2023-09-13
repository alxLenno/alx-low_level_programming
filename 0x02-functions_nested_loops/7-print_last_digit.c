/**
 * print_last_digit - Prints the last digit
 * @a: the integer used
 * Return: the last digit
 */

int print_last_digit(int a)
{
	_putchar((a % 10) + '0');
	return (a % 10);
}
