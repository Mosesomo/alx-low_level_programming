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
	ssize_t fd, rd, w;
	char *ptr;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	ptr = malloc(sizeof(char) * letters);
	rd = read(fd, ptr, letters);
	w = write(STDOUT_FILENO, ptr, rd);
	free(ptr);
	close(fd);
	return (w);
}
