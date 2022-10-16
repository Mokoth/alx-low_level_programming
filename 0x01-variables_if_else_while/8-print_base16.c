#include <stdio.h>
/**
 * main - Entry point
 * program to print all numbers of base 16 in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
		putchar(n);
	for (n = 97; n < 103; n++)
		putchar(n);
	putchar(10);
	return (0);
}
