#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - print a name
 * @name: string
 * @f: pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (f == NULL)
return;
(*f)(name);
}
