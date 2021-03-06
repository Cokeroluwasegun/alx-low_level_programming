#include "lists.h"
/**
* print_list - print items in a list
* @h: the list to be printed
* Return: number of elements
*/
size_t print_list(const list_t *h)
{
size_t c = 0;
while (h)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
h = h->next;
}
else
{
printf("[%d] %s\n", h->len, h->str);
h = h->next;
}
c++;
}
return (c);
}
