#include <stdio.h>
#include "get_next_line.h"
#include <fcntl.h>

int		main(int ac, char **argv)
{
	char	*line;
	int		fd;

	ac++;
	fd = open(argv[1], O_RDONLY);
	while ((get_next_line(fd, &line) > -1) && line)
	{
		printf("%s\n", line);
		free(line);
		line = NULL;
	}
	return (0);
}

/* int main()
{
 	int fd[2];
 	int	i = 0;
	int j = 0;
 	char *str;
 	fd[0] = open("get_next_line.h", O_RDONLY);
 	fd[1] = open("get_next_line.c", O_RDONLY);
 	if (fd[0] != -1 && fd[1] != -1)
 	{
 		while (i < 200)
 		{
 			j = get_next_line(fd[i % 2], &str);
 			printf("%d|||%s\n",j, str);
 			i++;
 		}
 	}
	while (1)
		;
 	close(fd[0]);
 	close(fd[1]);
 	return (0);
}*/
