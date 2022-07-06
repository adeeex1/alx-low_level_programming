#include <main.h>

/**
 * print_alphabet - entry point
 *
 * Return: always 0
 */
void print_alphabet(void)
{
	char let;

	for (let = 'a'; let <= 'z'; let++)
		_putchar(let);
	_putchar('\n');
}
