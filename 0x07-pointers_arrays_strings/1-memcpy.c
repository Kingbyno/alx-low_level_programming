#include "main.h"

/**
 * _memcpy -> a function that copies memory area
 * @dest: is destination memory
 * @src: is source memory
 * @n: copied byte number
 * Return: string copied from source
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	dest[a] = scr[a];
	return (dest);
}
