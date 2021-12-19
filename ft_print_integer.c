#include "ft_printf.h"

void	ft_putnbr_int(int nb)
{
	long n;

	n = (long)nb;
	if (n >= 0 && n <= 9)
	{
		n = n + 48;
		write(1, &n, 1);
	}
	else if (n < 0)
	{
		if (n == -2147483648)
			write(1, "-2147483648", 11);
		else
		{
			write(1, "-", 1);
			n = n * (-1);
			ft_putnbr_int(n);
			return ;
		}
	}
	else
	{
		ft_putnbr_int(n / 10);
		ft_putnbr_int(n % 10);
	}
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

int	ft_is_i_or_d(int nb)
{
	ft_putnbr_int(nb);
	return (ft_len_int(nb));
}