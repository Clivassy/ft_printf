#include "libprintf.h"

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

int ft_number_len(unsigned long *nb)
{
	int	len;
	long nbr;

	nbr = (unsigned long)nb;
	len = 0;
	if (nbr < 0)
	{
		len = nbr * (-1);
		len++;
	}
	while (nbr > 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

size_t ft_strlen(char *str)
{
    size_t i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}

int	ft_len(unsigned int count, char *str)
{
	count = ft_strlen(str);
	return (count);
}