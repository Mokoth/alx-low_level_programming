#include <stdio.h>
/**
 * main - Entry point
 * program to print alphabet in lowercase, and then in uppercase
 * Return: 0 Success
 */
int main(void)
{
	char ch = 'a';
	char ch1 = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (ch1 <= 'Z')
	{
		putchar(ch1);
		ch1++;
	}
	putchar(10);
	return (0);
}
