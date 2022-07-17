#include "main.h"

/**
 * _memset -> this a function that fill memory witha with a constant byte
 * @s: this a string
 * @b: this a character
 * @n: unsigned
 * Return: a string
 */
char *_memset(char *s, char b, unsigned int n);
{
	unsigned int a;

	for (a = 0; a < n; a++)
	s[a] = b;
	return (s);
}
