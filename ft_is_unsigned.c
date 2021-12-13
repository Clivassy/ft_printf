#include "libprintf.h"

unsigned int	ft_is_unsigned(unsigned int i, char *s, va_list args)
{
	unsigned int u_nb;

	u_nb = 0;
	u_nb = va_arg(args, unsigned int);
	ft_putnbr_fd(u_nb, 1);
	i++;
	return (u_nb);
}