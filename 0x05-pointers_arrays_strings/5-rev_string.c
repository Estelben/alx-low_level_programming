#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: 0
 */

void rev_string(char *s)
{
int length, m, full;
char temp;

for (length = 0; s[length] != '\0'; length++)
;
m = 0;
full = length / 2;

while (full--)
{
temp = s[length - m - 1];
s[length - m - 1] = s[m];
s[m] = temp;
m++;
}
}
