#include <stdio.h>
/**
 * main - Entry point
 * program to print all single digit numbers of base 10 from 0, using putchar
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
		putchar(n);
	putchar(10);
	return (0);
}
