#include "main.h"
/**
 * _puts - print a string
 * @str: string to print
 * Return: void
 */
void _put(char *str)
{
int i = 0;
while (*(str + i) != '\0')
{
_putchar(*(str + i));
i++
}
_putchar('\n');
}
