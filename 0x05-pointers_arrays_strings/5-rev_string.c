#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: 0
 */

void rev_string(char *s)
{
char rev = s[0];
int tmp = 0;
int m;
while (s[tmp] != '\0') tmp++;
for (m = 0; m < tmp; m++)
{	
tmp--;
rev = s[m];
s[m] = s[tmp];
s[tmp] = rev;
}
}
