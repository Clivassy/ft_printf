#include "ft_printf.h"

void	ft_putnbr_unsigned(unsigned n)

{
	if (n >= 0 && n <= 9)
	{
		n = n + 48;
		write(1, &n, 1);
	}
	else if (n < 0)
	{
			write(1, "-", 1);
			n = n * (-1);
			ft_putnbr_unsigned(n);
			return ;
	}
	else
	{
		ft_putnbr_unsigned(n / 10);
		ft_putnbr_unsigned(n % 10);
	}
}

unsigned int	ft_is_unsigned(va_list args)
{
	unsigned int u_nb;

	u_nb = 0;
	u_nb = va_arg(args, unsigned int);
	ft_putnbr_unsigned(u_nb);
	return (u_nb);
}