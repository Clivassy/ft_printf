#include "ft_printf.h"

void	ft_putnbr_base_pointer(unsigned long nbr, char *base)
{
	unsigned long 	long_nbr;
	unsigned long	base_size;

	base_size = 16;
	long_nbr = (unsigned long)nbr;
		if (nbr < 0)
		{
			ft_putchar('-');
			long_nbr = -long_nbr;
		}
		if (long_nbr > base_size)
			ft_putnbr_base_pointer(long_nbr / base_size, base);
		ft_putchar(base[long_nbr % base_size]);
}

int ft_pointer_len(unsigned long *nb)
{
	int	len;
	long nbr;

	nbr = (unsigned long)nb;
	len = 0;
	while (nbr != 0)
	{
		nbr = nbr / 16;
		len++;
	}
	return (len);
}

unsigned long *ft_is_pointer(va_list args)
{
    unsigned long	adress;
	unsigned long	*result;
	
    char  base[] = "0123456789abcdef";
    adress = va_arg(args, unsigned long);
    ft_putnbr_base_pointer(adress, base);
	result = &adress;
    return (result);
}