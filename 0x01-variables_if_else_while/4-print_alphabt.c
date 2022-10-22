#include <stdio.h>
/**
 * main - Entry point
 * program to print lowercase alphabets except q and e
 * Return: 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if ((ch == 'q') || (ch == 'e'))
		{
			ch++;
			continue;
		}
		putchar(ch);
		ch++;
	}
	putchar(10);
	return (0);
}
