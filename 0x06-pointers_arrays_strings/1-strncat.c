#include "main.h"
#include <string.h>

/**
 * _strncat -  function that concatenates two strings.
 * @src: enter value
 * @dest: enter value
 * @n: enter value
 *
 * Return: always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = strlen(dest);
	int a = 0;

	while (a < n && *src)
	{
		dest[index + a] = *src;
		src++;
		a++;
	}
	dest[index + a] = '\0';
	return (dest);
}
