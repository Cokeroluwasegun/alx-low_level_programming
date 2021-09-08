#include "main.h"
#include "stdio.h"
/**
 * 0-strcat - concatenate two strings
 * @dest: first string
 * @src: second string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
int i;
int j;
int i = 0;
while (dest[i] !='\0')
{
i++;
}
while (src[i] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
