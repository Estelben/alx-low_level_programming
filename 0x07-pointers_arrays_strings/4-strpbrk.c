#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string to be searched.
 * @accept:set of bytesto be searched.
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
int u;

while (*s)
{
for (u = 0; accept[u]; u++)
{
if (*s == accept[u])
return (s);
}
s++;
}

return ('\0');
}
