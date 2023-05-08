#include "main.h"

/**
 * _strspn - the lenght of a prefix substring.
 * @s: the string to be searched.
 * @accept: prefix to be measured.
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;
int pull;

while (*s)
{
for (pull = 0; accept[pull]; pull++)
{
if (*s == accept[pull])
{
n++;
break;
}
else if (accept[pull + 1] == '\0')
return (n);
}
s++;
}
return (n);
}
