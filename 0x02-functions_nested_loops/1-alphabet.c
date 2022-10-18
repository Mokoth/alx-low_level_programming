#include "main.h"

/**
 * print_alphabet - Entry point
 * program to print alphabets
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar(10);
}
