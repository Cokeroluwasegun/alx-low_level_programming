#include "main.h"
#include <stdio.h>
/**
* _memset - fills memory with a constant byte.
* @s: the memory area to print in
* @b: the constant to print
* @n: the num of bytes to fill
* Return: s.
*/
/**
 * _strpbrk - searches a string
 * @s: string
 * @accept: string
 * Return: r
 */
char *_strpbrk(char *s, char *accept)
{
int i, j;
for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
return (&(s[i]));
}
}
return (0);
}
