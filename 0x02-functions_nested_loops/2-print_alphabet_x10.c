#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * program to print 10xalphabets
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char ch;
	int n;

	n = 0;

	while (n < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar(10);
		n++;
	}
}
