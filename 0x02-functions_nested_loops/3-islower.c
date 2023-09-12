#include "main.h"
/**
 * _islower - Check if in lower case
 * Return: 0 if not or 1 if lower
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
