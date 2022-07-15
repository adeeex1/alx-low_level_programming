#include "main.h"

/**
 * _islower - checks for a lowercase character
 * @c: letter for tested
 *
 * Return: always 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
