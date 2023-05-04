#include "main.h"

/**
 * cap_string -function that Capitalizes all words of a string.
 * @str: pointer to string.
 *
 * Return: A pointer to the changed string.
 */

char *cap_string(char *str)
{
int court = 0;

while (str[court])
{
while (!(str[court] >= 'a' && str[court] <= 'z'))
court++;

if (str[court - 1] == ' ' ||
str[court - 1] == '\t' ||
str[court - 1] == '\n' ||
str[court - 1] == ',' ||
str[court - 1] == ';' ||
str[court - 1] == '.' ||
str[court - 1] == '!' ||
str[court - 1] == '?' ||
str[court - 1] == '"' ||
str[court - 1] == '(' ||
str[court - 1] == ')' ||
str[court - 1] == '{' ||
str[court - 1] == '}' ||
court == 0)
str[court] -= 32;

court++;
}

return (str);
}
