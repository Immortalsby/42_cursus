#include <stdio.h>
#include "get_next_line.h"
#include <fcntl.h>

int		main(int ac, char **argv)
{
	char	*line;
	int		fd;

	ac++;
	fd = open(argv[1], O_RDONLY);
	while (get_next_line(0, &line) > 0)
	{	
		printf("%s\n", line);
		free(line);
	}
	while (1);
	return (0);
}
