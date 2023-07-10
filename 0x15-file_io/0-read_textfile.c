#include "main.h"

/**
 *read_textfile - function that reads a text file
 *@filename: text file to be read
 *@letters: number of letters to be read
 *
 *Return: number of bytes read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
       	ssize_t rd;
	ssize_t w;
	char *ptr;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	ptr = malloc(sizeof(char) * letters);
	if (ptr == NULL)
		return (0);
	rd = read(fd, ptr, letters);
	w = write(1, ptr, rd);
	if (!w)
		return (0);
	free(ptr);
	close(fd);
	return (w);
}
