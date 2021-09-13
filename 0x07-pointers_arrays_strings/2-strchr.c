#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a charachter in a string
 * @s: the memory area to print in
 * @c: the memory to copy from
 * Return: a pointer to character
 */
char *_strchr(char *s, char c)
{
  int i;
  for (i = 0; s[i] != '\0')
    {
      if (s[i] == c)
	return (&s[i]);
    }
}
