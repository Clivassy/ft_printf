#include "libprintf.h"

int	ft_is_decimal(unsigned int i, char *s, va_list args)
{
	int	nb;

	nb = 0;
	nb  = va_arg(args, int);
	ft_putnbr_fd(nb, 1);
	return (nb);
}



