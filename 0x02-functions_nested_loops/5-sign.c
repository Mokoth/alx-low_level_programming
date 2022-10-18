#include "main.h"

/**
 * print_sign - of a number
 * Return: 1 and prints + if n is greater
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
 *
 * Return: 0 (Success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar(45);
	}
		return (-1);

}
