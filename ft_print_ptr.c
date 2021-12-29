/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbatoro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:41:52 by jbatoro           #+#    #+#             */
/*   Updated: 2021/12/19 17:44:02 by jbatoro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"

void	ft_putnbr_base_pointer(unsigned long long nbr, char *base)
{
	if (nbr > 15)
			ft_putnbr_base_hexa(nbr / 16, base);
	ft_putchar(base[nbr % 16]);
}

int	ft_pointer_len(unsigned long long nb)
{
	int	len;

	len = 0;
	while (nb != 0)
	{
		nb = nb / 16;
		len++;
	}
	return (len);
}

int	ft_is_pointer(unsigned long long ptr)
{
	int		len;
	char	base[16];

	ft_strncpy(base, "0123456789abcdef", sizeof(base));
	len = 0;
	len += write(1, "0x", 2);
	if (ptr == 0)
		len += ft_putchar('0');
	else
	{
		ft_putnbr_base_pointer(ptr, base);
		len += ft_pointer_len(ptr);
	}
	return (len);
}
