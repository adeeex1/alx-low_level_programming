#include <unistd.h>

/**
 * _putchar - prints 
 * @c: the character to c
 *
 * Return: on succes 1
 * on error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
