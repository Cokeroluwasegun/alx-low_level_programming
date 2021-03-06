#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/types.h>
/**
 * append_text_to_file - reads a text file and prints it to stdout.
 * @filename: file's name.
 * @text_content: number of letters it should read and print.
 * Return: integer
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, wr, len;
if (filename == NULL)
return (-1);
if (text_content == NULL)
return (1);
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
len = 0;
while (text_content[len])
len++;
if (!text_content)
text_content = "";
wr = write(fd, text_content, len);
if (wr == -1 || wr != len)
return (-1);
close(fd);
return (1);
}
