#include "ft_printf.h"

unsigned int	ft_len_unsigned(unsigned int nb)
{
	unsigned int		len;

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

void	ft_putnbr_base_hexa(unsigned int nbr, char *base)
{
	long int	long_nbr;
	unsigned int			base_size;

	base_size = 16;
	long_nbr = nbr;
	if (nbr < 0)
	{
		ft_putchar('-');
		long_nbr = nbr * (-1);
	}
	if (nbr > base_size)
		ft_putnbr_base_hexa(nbr / 16, base);
	ft_putchar(base[long_nbr % 16]);
}

 unsigned int	ft_is_hexa (va_list args, char c)
  {
    unsigned int hexa_nb;
    char base[16];

    if (c == 'x')
        strncpy(base, "0123456789abcdef", sizeof(base));
    if (c == 'X')
         strncpy(base, "0123456789ABCDEF", sizeof(base));
    hexa_nb = 0;
    hexa_nb  = va_arg(args, unsigned int);
    ft_putnbr_base_hexa(hexa_nb, base);
    return (hexa_nb);
  }