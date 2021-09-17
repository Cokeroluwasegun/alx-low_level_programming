#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints name of program
 * @argc - integer count
 * @argv - pointer array
 * Return: int
 */
int main(int argc, char* argv[])
{
if(argc >= 0)
printf("%s\n", argv[0]);
return (0);
}
