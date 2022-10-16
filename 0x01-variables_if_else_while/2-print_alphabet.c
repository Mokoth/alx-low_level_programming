#include <stdio.h>
/**
 * main - Entry point
 * program to print alphabets in lowercase using only putchar twice
 * Return: 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar(10);
	return (0);
}
