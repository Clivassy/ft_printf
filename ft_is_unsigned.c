#include "libprintf.h"

unsigned int	ft_is_unsigned(unsigned int i, char *s, va_list args)
{
	unsigned int u_nb;
	char *str;

	u_nb = 0;
	u_nb = va_arg(args, unsigned int);
	str = ft_utoa(u_nb);
	ft_putstr_fd(str, 1);
	i++;
	return (u_nb);
}

unsigned int	ft_count_unsigned(unsigned int nb)
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

