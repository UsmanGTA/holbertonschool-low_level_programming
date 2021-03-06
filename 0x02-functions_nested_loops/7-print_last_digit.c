#include "holberton.h"

/**
 * print_last_digit - computs absolute value
 *
 * @n: pulled from main file
 *
 * Return: Always 0.
 */

int print_last_digit(int n)
{
	int ld = n % 10;
	int pos = -ld;

	if (n < 0)
	{
		_putchar(pos + '0');
		return (pos);
	}

	else
	{
		_putchar(ld + '0');
		return (ld);
	}
}
