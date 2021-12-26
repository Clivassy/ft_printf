/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbatoro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 19:10:17 by jbatoro           #+#    #+#             */
/*   Updated: 2021/12/19 17:50:13 by jbatoro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"

int	ft_printf(const char *s, ...)
{
	int		i;
	va_list	args;
	int		len_return;

	len_return = 0;
	i = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			len_return += ft_search_format(args, s[i + 1]);
			i++;
		}
		else
		{
			len_return += ft_putchar(s[i]);
		}
		i++;
	}
	va_end (args);
	return (len_return);
}