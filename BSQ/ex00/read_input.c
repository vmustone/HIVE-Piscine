#include <unistd.h>
#include <fcntl.h>

void	ft_putstr(char *str);
#define BUF_SIZE 10

int	main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = 1;
	ret = 1;
	fd = open(argv[1], O_RDONLY);
	if (argc < 2)
		ft_putstr("File name missing\n");
	else if (argc > 2)
		ft_putstr("Too many arguments\n");
	else
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (0);
	while (ret)
	{
		ret = read(fd, buf, BUF_SIZE);
		buf[ret] = '\0';
		write(2, &buf, 5);
	}
	close (fd);
	return (0);
}
