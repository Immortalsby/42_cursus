#include <stdio.h>
#include "get_next_line.h"

int		main(int ac, char **argv)
{
	char	*line;
	int		fd;

	ac++;
	fd = open(argv[1], O_RDONLY);
	while (get_next_line(fd, &line) > 0)
		printf("l : %s\n", line);
	return (0);
}
