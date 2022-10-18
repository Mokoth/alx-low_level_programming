#include "main.h"

/**
 * print_last_digit - computes the last value of n
 * @n: the int to check
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	int f;

	if (n < 0)
		n = -n;
	f = n % 10;

	if (f < 0)
		f = -f;
	_putchar(f + '0');
	return (f);
}
