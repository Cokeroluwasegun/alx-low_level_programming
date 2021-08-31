#include "stdio.h"
/**
 * main - Entry point
 * 0-holberton.c
 * Return: Always 0 (Success)
 */
int main(void)
{
  int i;
  char c[] = "Holberton";
  for (i = 0; i <= 8; i++)
  {
  putchar(c[i]);
  }
  putchar('\n');
  return (0);
}
