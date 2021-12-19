/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbatoro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:45:03 by jbatoro           #+#    #+#             */
/*   Updated: 2021/12/19 17:48:18 by jbatoro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_len_unsigned(unsigned int nb)
{
	int	len;

	len = 0;
	while (nb != 0)
	{
		len++;
		nb = nb / 16;
	}
	return (len);
}

void	ft_putnbr_base_hexa(unsigned int nbr, char *base)
{
	long int		long_nbr;
	unsigned int	base_size;

	base_size = 16;
	long_nbr = nbr;
	if (long_nbr > 15)
		ft_putnbr_base_pointer(long_nbr / base_size, base);
	ft_putchar(base[long_nbr % base_size]);
}

int	ft_is_hexa(unsigned int nb, const char c)
{
	char	base[16];

	if (c == 'x')
		strncpy(base, "0123456789abcdef", sizeof(base));
	if (c == 'X')
		strncpy(base, "0123456789ABCDEF", sizeof(base));
	if (nb == 0)
		return (ft_putchar('0'));
	else
		ft_putnbr_base_hexa(nb, base);
	return (ft_len_unsigned(nb));
}
