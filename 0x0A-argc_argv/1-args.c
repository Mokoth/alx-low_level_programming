#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed
 * @argc: count the args
 * @argv: array of args
 *
 * Return: 0 always (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
