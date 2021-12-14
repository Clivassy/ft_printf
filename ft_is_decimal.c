#include "libprintf.h"

int	ft_is_decimal(unsigned int i, char *s, va_list args)
{
	int	nb;

	nb = 0;
	nb  = va_arg(args, int);
	ft_putnbr_fd(nb, 1);
	return (nb);
}

int	ft_count_int_nb(int nb)
{
	int		len;

	len = 0;
	if (nb <= 0)
		len = 1;
	while (nb != 0)
	{
		len++;
		nb = nb / 10;
	}
	return (len);
}

