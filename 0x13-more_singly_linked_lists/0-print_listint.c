#include "lists.h"
/**
 * print_listint - print all element of a list
 * @h: listint_t
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
  size_t i = 0;
  while (h)
    {
      printf("%d\n", h->n);
      h = h->next;
      i++;
    }
  return (i);
}
