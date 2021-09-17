#include <stdio.h>
#include <stdlib.h>
/**
 * 0-whatsmyname - prints its name followed by a new line
 * @argc - integer count
 * @argv[] - pointer array
 * Return 0.
 */
int main(int argc, char* argv[])
{
if(argc >= 0)
printf("%s\n", argv[]);
return (0);
}
