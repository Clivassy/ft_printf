/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbatoro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 11:13:58 by jbatoro           #+#    #+#             */
/*   Updated: 2021/12/10 19:23:46 by jbatoro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "printf.h"

int ft_printf(const char *s, ...)
{
	int i;
	char *string;
	int	nb;
	char c;
	unsigned int u_nb; 
	float dec_nb;

	i = 0;
	va_list args;
	va_start (args, s);

	while (s[i])
	{
		while (s[i] && s[i]!= '%')
		{
			ft_putchar_fd(s[i], 1);
			i++;
		}
		while (s[i] == '%')
			i++;
		/*
			if (s[i]  == 's')
			{
				while (s[i] && s[i] != '%')
				{
					string = va_arg(args, char *);
					ft_putstr_fd(string, 1);
					i++;
				}
			}
			if (s[i] == 'i')
			{	
				nb = 0;
				while (s[i] && s[i] != '%')
				{
					nb = va_arg(args, int);
					ft_putnbr_fd(nb, 1);
					i++;
				}
			}

			if (s[i] == 'c')
			{
				while (s[i] && s[i] != '%')
				{
					c = va_arg(args, int);
					ft_putchar_fd(c, 1);
					i++;
				}
			}
			if (s[i] == 'u')
			{
				while (s[i] && s[i] != '%')
				{
					u_nb = va_arg(args, unsigned int);
					ft_putnbr_fd(u_nb, 1);
					i++;
				}
			} */
			if (s[i] == 'd')
			{
				while (s[i] && s[i] != '%')
				{
					dec_nb  = va_arg(args, double);
					ft_putnbr_fd(dec_nb, 1);
					i++;
				}
			}
				
		}
	va_end (args);
	return (i);
}

#include <stdio.h>
int main(void)
{
	int nb = 20;
	char *str = "ca va?";
	char	c = 'Y';
	unsigned int u_nb = 123456;
	float dec_nb = 1.5;

	ft_printf("Hello ca va ?\n");
//	ft_printf("%s", str);
//	ft_printf("%c", c);
//	ft_printf("%u", u_nb);
//	ft_printf("%p", nb);
//	ft_printf("%i", nb);
//	ft_printf("%x", nb);
	ft_printf("%d", dec_nb);
	return (0);
}
