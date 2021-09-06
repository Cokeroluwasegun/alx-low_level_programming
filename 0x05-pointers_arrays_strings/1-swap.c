#include "main.h"
/**
 * 1-swap - swap
 * @a: first int
 * @b: second int
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
