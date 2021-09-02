#include "main.h"
/**
 * print_diagonal - print diagonal
 *@size: size of square
 * Ruturn: Always 0
 */
void print_square(int size)
{
if (size > 0)
{
int i, j;
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
