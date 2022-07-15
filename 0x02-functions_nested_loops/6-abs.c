#include "main.h"

/**
 * _abs - prints a character to c stdio
 * @n: integer absolute value
 *
 * Return: always 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
