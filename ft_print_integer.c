#include "ft_printf.h"

void	ft_putnbr_int_fd(int n)
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
			ft_putnbr_int_fd(n);
			return ;
	}
	else
	{
		ft_putnbr_int_fd(n / 10);
		ft_putnbr_int_fd(n % 10);
	}
}

int	ft_is_i_or_d(va_list args)
{
	int	nb;

	nb = 0;
	nb = va_arg(args, int);
	ft_putnbr_int_fd(nb);
	return (nb);
}

int	ft_len_int(int nb)
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