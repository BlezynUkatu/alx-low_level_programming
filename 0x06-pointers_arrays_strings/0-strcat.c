#include "main.h"
/**
 *_strcat - concatenates two strings
 *@dest: A pointer to a character that will be changed
 *@src: A pointer to a character that will also be changed
 *Return: dest
 */

char *_strcat(char *dest, char *src)
{
int m, n;

m = 0;
while (dest[m] != '\0')
{
m++;
}

n = 0;
while (src[n] != '\0')
{
dest[n] = src[n];
n++;
m++;
}
dest[m] = '\0';

return (dest);
}
