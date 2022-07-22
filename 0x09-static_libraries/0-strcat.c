#include "main.h"

/**
 * _strcat - this is a funcion strcat
 * @dest: first param
 * @src: second param
 * Return: a pointer to the destination string dest
 */
char *_strcat(char *dest, char *src)
{
char *dest_end = dest;
int src_len = 0;

while (*dest_end)
++dest_end;

while (src[src_len])
++src_len;

if (src + src_len < dest || dest_end + src_len < src)
{
do {
*dest_end++ = *src++;
} while (src_len--);

}
return (dest);

}
