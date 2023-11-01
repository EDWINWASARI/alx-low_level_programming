#include "main.h"
/**
 * read_textfile - Function that reads a text file and prints it
 * to the POSIX standard output
 * @filename: filename (string pointer)
 * @letters: The number of letters it should read and print.
 *
 * Return: The actual number of letters it could read and print.
 * 0 on failure, or if filename is NULL, or if write fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *buffer;
ssize_t bytes_read;
ssize_t bytes_written;
if (filename == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buffer = (char *)malloc(letters);
if (buffer == NULL)
{
close(fd);
return (0);
}
bytes_read = read(fd, buffer, letters);
if (bytes_read == -1)
{
close(fd);
free(buffer);
return (0);
}
bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
if (bytes_written == -1 || (size_t)bytes_written != (size_t)bytes_read)
{
close(fd);
free(buffer);
return (0);
}
close(fd);
free(buffer);
return (bytes_written);
}
