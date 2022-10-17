#include <stdio.h>
/**
 * main - Entry point
 * program to print combination of single-digits
 * Return: 0 (Success)
 */
int main(void)
{
	int k, n;

	for (k = 48; k <= 56; k++)
	{
		for (n = 49; n <= 57; n++)
		{
			if (n > k)
			{
				putchar(k);
				putchar(n);
				if (k != 56 || n != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar(10);
	return (0);
}
