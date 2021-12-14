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

void	ft_putnbr_base_bis(unsigned long nbr, char *base)
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
			ft_putnbr_base_bis(long_nbr / base_size, base);
		ft_putchar_fd(base[long_nbr % base_size], 1);
	}
}

unsigned long *ft_is_pointer(unsigned int i, char *s, va_list args)
{
    unsigned long	adress;
	unsigned long	*result;
	
    char  base[] = "0123456789abcdef";
    adress = va_arg(args, unsigned long);
    ft_putnbr_base_bis(adress, base);
    i++;
	result = &adress;
    return (result);
}