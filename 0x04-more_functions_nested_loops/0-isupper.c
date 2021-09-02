#include "main.h"
/**
 * _isuper - checks for uppercase charcaters
 *@c: character to check
 * Return: Always 0 or 1
 */
int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
return (1);
else
return (0);
}
