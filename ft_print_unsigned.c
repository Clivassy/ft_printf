#include "ft_printf.h"

int	ft_len_itoa(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb < 0)
	{
		len = nb * (-1);
		len++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}
char	*ft_utoa(unsigned int nb)
{
	char 	*str;
	int	i;

	i = ft_len_itoa(nb);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i--] = '\0';
	if (nb == 0)
	{
		str[0] = '\0';
		return (str);
	}
	if (nb < 0)
	{
		str[0] = '-';
		nb = nb * (-1);
	}
	while (nb != 0)
	{
		str[i] = 48 + (nb % 10);
		nb = nb / 10;
		i--;
	}
	return (str);
}

int	ft_print_unsigned(unsigned int n)
{
	int		len;
	char	*num;

	len = 0;
	if (n == 0)
		len += write(1, "0", 1);
	else
	{
		num = ft_utoa(n);
		len += ft_print_str(num);
		free(num);
	}
	return (len);
}