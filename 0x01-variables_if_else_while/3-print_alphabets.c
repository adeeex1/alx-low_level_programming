#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	char a;
	char A;

	for (a = 'a'; a <= 'z'; a++)
		putchar(0);
	for (A = 'A'; A <= 'Z'; A++)
		putchar(0);
	putchar('\n');
	return (0);
}
