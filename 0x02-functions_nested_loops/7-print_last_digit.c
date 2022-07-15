#include "main.h"

/**
 * print_last_digit - prints a last digit
 * @n: last digit
 *
 * Return: always 0
 */
int print_last_digit(int n)
{
	int a;

	a = n % 10;
	if (a < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
