#include "libprintf.h"

void    ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

void    ft_putstr_fd(char *str, int fd)
{
    int i;

    i = 0;
    while (str[i])
    {
        write(fd, &str[i], 1);
        i++;
    }
}

void	ft_putnbr_unsigned_fd(unsigned n, int fd)
{
	if (n >= 0 && n <= 9)
	{
		n = n + 48;
		write(fd, &n, 1);
	}
	else if (n < 0)
	{
			write(fd, "-", 1);
			n = n * (-1);
			ft_putnbr_unsigned_fd(n, fd);
			return ;
	}
	else
	{
		ft_putnbr_unsigned_fd(n / 10, fd);
		ft_putnbr_unsigned_fd(n % 10, fd);
	}
}