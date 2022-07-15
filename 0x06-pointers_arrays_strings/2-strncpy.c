#include "main.h"

/**
 * _strncpy - this function copies at most n byte
 * @dest: the buffer to copy to
 * @src: the string to copy
 * @n: the maximum number of bytes to copy from src
 * Return: a pointer to the destination string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
char *dest_end = dest;
int src_len = 0;

while (src_len < n && src[src_len])
++src_len;

if (src + src_len < dest || dest + n < src)
{
for (; src_len; --src_len, --n)
*dest_end++ = *src++;

for (; n; --n)
*dest_end++ = '\0';

}
return (dest);

}
