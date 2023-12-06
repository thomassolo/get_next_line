#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"


int main()
{
	int fd = open("a.txt", O_RDONLY);
	char *line;
	line = get_next_line(fd);
	while (line)
	{
	 	line = get_next_line(fd);	
		printf("%s", line);
	 	line = get_next_line(fd);	
		printf("%s", line);
	 	line = get_next_line(fd);	
		printf("%s", line);
	 	line = get_next_line(fd);	
		printf("%s", line);
	}
	free (line);
	return 0;
}
