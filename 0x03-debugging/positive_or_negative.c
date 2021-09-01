#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * positive or negative - Entry point
 * positive or negative
 * Return: Always 0.
 */
void positive_or_negative(int i)
{
if (i == 0)
printf("%d is zero\n", i);
else
if (i > 0)
printf("%d is positive\n", i);
else
printf("%d is negative\n", i);
}
