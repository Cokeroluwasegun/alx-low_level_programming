#include "main.h"
/**
 * print_diagonal - print diagonal
 *@n: integer
 * Return: int
 */
void print_diagonal(int n)
{
if (n <= 0)
_putchar('\n');
else
{
int i, j;
for (i = 1; i <= n; i++)
{
for (j = 1; j <= n; j++)
{
if (i == j)
{
_putchar('\\');
}
else
{
if (i > j)
{
_putchar(' ');
}
}
}
_putchar('\n');
}
}
}
