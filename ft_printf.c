/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbatoro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 19:10:17 by jbatoro           #+#    #+#             */
/*   Updated: 2021/12/15 23:11:54 by jbatoro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int ft_printf(const char *s, ...)
{
	int i;
	va_list args;
	int count;

	count = 0;
	i = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			count += ft_cspdiuxX(args, s[i + 1]);
			i++;
		}
		else
		{
			count += ft_putchar(s[i]);
		}
		i++;
	}
	va_end (args);
	printf("\n%d", count);
	return (count);
}