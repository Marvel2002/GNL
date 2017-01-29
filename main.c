#include "libft/libft.h"
#include "get_next_line.h"

int		main(int argc, char **argv)
{
	int fd;
	char *line = NULL;
	int test;

	fd = open(argv[1], O_RDONLY);
	printf("le retour de GNL est %d", get_next_line(fd, &line));
	printf("%s", line);
	return (0);
}
