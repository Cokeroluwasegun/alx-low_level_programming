#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - print a doubly linked list
 * @h: head
 * Return: number of nodes printed
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t count = 0;

while (h != NULL)
{
printf("%d\n", h->n);
count++;
h = h->next;
}
return (count);
}
