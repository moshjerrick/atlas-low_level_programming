#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
/**
 *
 *
 *
 *
 */
int create_file(const char *filename, char *text_content)
{
	int fd, rd, wd;
	char *buff = malloc(sizeof(char) * letters);
	size_t letters = 1024;

	if (filename == NULL)
	{
		return (0);
	}

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDWR);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}
	
	rd = read(fd, buff, letters);
	if (rd == -1)
	{
		close(fd)
		free(buff);	
		return (0);
	}
	wd = write(STDOUT_FILENO, buff, rd);
	if (wd == -1)
	{
		close(fd);
		free(buff);
		return (0);
	}
	close(fd);
	free(buff);
	return (wd);
}
