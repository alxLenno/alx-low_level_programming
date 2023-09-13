#include "main.h"
/**
 * jack_bauer - Prints hrs min
 * Retrun: void
 */

void jack_bauer(void)
{
	int min = 0;
	int hrs = 0;

	while (hrs <= 23)
	{
		if (hrs < 10)
		{
			_putchar('0');
			_putchar('0' + hrs);
		}
		else
		{
			_putchar(hrs + '0');
		}
		_putchar(':');

		if (min < 10)
		{
			_putchar('0');
			_putchar('0' + min);
		}
		else
		{
			_putchar('0' + min);
		}
		min += 1;
		if (min == 60)
		{
			hrs += 1;
		}
		_putchar('\n');
	}
}
