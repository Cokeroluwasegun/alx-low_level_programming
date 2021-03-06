#include "lists.h"
#include <stdio.h>
/**
* add_dnodeint - add a node at the begenning of a doubly linked list
* @head: head
* @n: data
* Return: number of nodes printed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *demo;
demo = (dlistint_t *)malloc(sizeof(dlistint_t));
if (!demo)
return (NULL);
demo->n = n;
demo->prev = NULL;
demo->next = (*head);
if ((*head) != NULL)
(*head)->prev = demo;
*head = demo;
return (*head);
}
