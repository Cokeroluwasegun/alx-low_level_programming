#include "main.h"
/**
 * print_number - print a number
 * @n: integer
 * Return: void
 */
void print_number(int n)
{
if (n < 0)
{
n = (-1) * n;
_putchar('-');
}
if (n > 9)
{
int a = n / 10;
n -= 10 * a;
print_number(a);
}
_putchar('0' + n);
}
