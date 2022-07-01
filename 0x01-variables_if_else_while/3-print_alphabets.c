#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	char A;

	for (A = 'a'; A <= 'z'; A++)
		putchar(0);
	for (A = 'A'; A <= 'Z'; A++)
		putchar(0);
	putchar('\n');
	return (0);
}
