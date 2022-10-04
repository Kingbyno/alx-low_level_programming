#include "main.h"

/**
 * _isalpha -> checks for alphabical letters
 * @c:a character to be check on
 * Return: return 0 or 1 depending on condiction
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
