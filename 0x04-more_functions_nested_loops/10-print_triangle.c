#include "main.h"
/**
 *print_triangle - print triangle
 *@size: siez of triangle
 * Return: void
 */
void print_triangle(int size)
{
if (size <= 0)
_putchar('\n');
else
{
int i, j;
for (i = size; i > 0 ; i--)
{
for (j = 1; j <= size; j++)
{
if (i > j)
_putchar(' ');
else
_putchar('#');
}
_putchar('\n');
}
}
}
