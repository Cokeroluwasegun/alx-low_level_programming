#include "main.h"
/**
*_sqrt_recursion - natural square
* @n : int
* Return: int
*/
int _squrt_recursion(int n)
{
if (n < 0)
return (-1);
else
return (sqrtchecker(n, (n + 1) / 2));
}
/**
* sqrCheck - test natural square.
* @a: the memory area to print in
* @b: to busy for desc :(
* Return: int.
*/
int sqrtchecker(int a, int b)
{
if (b * b ==a)
return (b);
else if (b == 1)
return (-1);
else
return(sqrtchecker(a, b -1));
}
