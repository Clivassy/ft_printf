/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbatoro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 19:10:17 by jbatoro           #+#    #+#             */
/*   Updated: 2021/12/11 19:24:50 by jbatoro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "printf.h"

char	*ft_is_string(unsigned int i, char *s, ...)
{
	char *string;
	va_list args;

	va_start (args, s);
	while (s[i] && s[i] != '%')
	{
		string = va_arg(args, char *);
		ft_putstr_fd(string, 1);
		i++;
		while (s[i] && s[i] != '%')
		{
			ft_putchar_fd(s[i], 1);
			i++;
		}
	}
	va_end (args);
	return (string);
}

int ft_printf(const char *s, ...)
{
	unsigned int i;
	
	i = 0;
	va_list args;
	va_start (args, s);

	while (s[i] && s[i] != '%')
	{
		ft_putchar_fd(s[i], 1);
		i++;
	}
	while (s[i] == '%') // A gerer : le cas des %% d affile
		i++;
/* Cas a mettre dans une fonction a part*/
	if (s[i]  == 's')
		ft_is_string(s[i], (char*)s, args);
/*	if (s[i] == 'i')
		ft_is_integer(s);
	if (s[i] == 'c')
		ft_is_character(s[i]); 
	if (s[i] == 'u')
		ft_is_unsigned(s[i]);
	if (s[i] == 'p')
		ft_is_pointer(s[i]);
	if (s[i] == 'd')
		ft_is_decimal(s[i]);
	if (s[i] == 'x')
		ft_is_hexa(s[i]);*/

	va_end (args);
	return (i);
}


/*

int	*ft_is_integer(char *s)
{
	int	nb;

	nb = 0;

	if (s[i] == 'i')
	{
		while (s[i] && s[i] != '%')
		{
			nb = va_arg(args, int);
			ft_putnbr_fd(nb, 1);
			i++;
		}
	}
	return (nb);
}

int	*ft_is_character(char *s)
{
	int c;

	character = 0;
	if (s[i] == 'c')
	{
		while (s[i] && s[i] != '%')
		{
			character = va_arg(args, int);
			ft_putchar_fd(character, 1);
			i++;
		}
	}
	return (character);
}

unsigned int	*ft_is_unsigned(char *s)
{
	unsigned int u_nb;

	u_nb = 0;
	if (s[i] == 'u')
	{
		while (s[i] && s[i] != '%')
		{
			u_nb = va_arg(args, unsigned int);
			ft_putnbr_fd(u_nb, 1);
			i++;
		}
	}
	return (u_nb);
}

int	*ft_is_decimal(char *s)
{
	int	nb;

	nb = 0;
	if (s[i] == 'd')
	{
		while (s[i] && s[i] != '%')
		{
			nb  = va_arg(args, int);
			ft_putnbr_fd(nb, 1);
			i++;
		}
	}
	return (nb);
}
*/

#include <stdio.h>
int main(void)
{
	int nb = 20;
	char *str = "Oui ca va et toi?";
	char	c = 'Y';
	unsigned int u_nb = 123456;

	ft_printf("Hello ca va ?\n%s\nTant mieux :)\nQuel age a tu?%s\n", str);
	//	ft_printf("%s", str);
	//	ft_printf("%c", c);
	//	ft_printf("%u", u_nb);
	//	ft_printf("%p", nb);
	//	ft_printf("%i", nb);
	//	ft_printf("%x", nb);
	//	ft_printf("%d\n", nb);
	return (0);
}
