#include "libprintf.h"

static int	ft_check_base(char *base)
{
	int	i;
	int	j;
	int	base_size;

	base_size = 16;
	i = 0;
	if (base_size == 0 || base_size == 1)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (j < base_size)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(unsigned int nbr, char *base)
{
	long int	long_nbr;
	int			base_size;

	base_size = 16;
	long_nbr = nbr;
	if (ft_check_base(base) == 1)
	{
		if (nbr < 0)
		{
			ft_putchar_fd('-', 1);
			long_nbr = nbr * (-1);
		}
		if (nbr > base_size)
			ft_putnbr_base(nbr / 16, base);
		ft_putchar_fd(base[long_nbr % 16], 1);
	}
}

void	ft_putnbr_base_pointer(unsigned long nbr, char *base)
{
	unsigned long 	long_nbr;
	 int			base_size;

	base_size = 16;
	long_nbr = (unsigned long)nbr;
	if (ft_check_base(base) == 1)
	{
		if (nbr < 0)
		{
			ft_putchar_fd('-', 1);
			long_nbr = -long_nbr;
		}
		if (long_nbr > base_size)
			ft_putnbr_base_pointer(long_nbr / base_size, base);
		ft_putchar_fd(base[long_nbr % base_size], 1);
	}
}

