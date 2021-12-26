/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cspdiuxX.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbatoro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:33:04 by jbatoro           #+#    #+#             */
/*   Updated: 2021/12/19 17:49:59 by jbatoro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"

int	ft_search_format(va_list args, const char s)
{
	int	count;

	count = 0;
	if (s == 'c')
		count += ft_putchar(va_arg(args, int));
	if (s == 's')
		count += ft_print_str(va_arg(args, char *));
	if (s == 'p')
		count += ft_is_pointer(va_arg(args, unsigned long long));
	if (s == 'd' || s == 'i')
		count += ft_is_i_or_d(va_arg(args, int));
	if (s == 'u')
		count += ft_print_unsigned(va_arg(args, unsigned int));
	if (s == 'x' || s == 'X')
		count += ft_is_hexa(va_arg(args, unsigned int), s);
	if (s == '%')
		count += ft_print_percent();
	return (count);
}
