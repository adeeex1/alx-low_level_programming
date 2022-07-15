#include "main.h"

/**
 * _isalpha - print character to stdout
 * @c: checks character
 *
 * Return: always 0
 */
int _isalpha(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
