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
#include "ft_printf.h"

void	ft_putnbr_base_pointer(uintptr_t nbr, char *base)
{
	unsigned long long	long_nbr;
	unsigned long		base_size;

	base_size = 16;
	long_nbr = (unsigned long long)nbr;
	if (long_nbr > 15)
		ft_putnbr_base_pointer(long_nbr / base_size, base);
	ft_putchar(base[long_nbr % base_size]);
}

int	ft_pointer_len(uintptr_t nb)
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
		len += write(1, "0", 1);
	else
	{
		ft_putnbr_base_pointer(ptr, base);
		len += ft_pointer_len(ptr);
	}
	return (len);
}
