#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 for alphabet character or 0 for anything else
 */

int _isalpha(int c)
{
return ((c >= 65 && c <= 97) || (c >= 97 && c <= 122));
}
