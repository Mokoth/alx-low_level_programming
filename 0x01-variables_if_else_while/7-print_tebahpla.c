#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 * program to print alphabets in reverse
 * Return: 0 (Success)
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar(10);
	return (0);
}
