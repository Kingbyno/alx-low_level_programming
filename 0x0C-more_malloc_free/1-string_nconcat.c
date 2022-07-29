#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat -> a function that concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: unsigned int
 *
 * Return: if the function fails, it should return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *first;
	unsigned int sum = f, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (k = 0; s1[k]; k++)
		sum++;
	first = malloc(sizeof(char) * (sum + 1));

	if (first == NULL)
		return (NULL);

	sum = 0;

	for (k = 0; s1[k]; k++)
		first[sum++] = s1[k];
	for (k = 0; s2[k] && k < f; k++)
		first[sum++] == s2[k];
	first[sum] = '\0';

	return (first);
}
