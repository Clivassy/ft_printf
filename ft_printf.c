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
#include "libprintf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_erreur(char *base, int *erreur)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		*erreur = 1;
	while (base[i] && *erreur == 0)
	{
		j = i;
		while (base[j] != '\0')
		{
			j++;
			if (base[i] == base[j])
				*erreur = 1;
		}
		if (base[i] == '+' || base[i] == '-' || base[i] == '%'
				|| base[i] == '/' || base[i] == '*' || base[i] == '='
				|| base[i] == ',' || base[i] == '.'
				|| base[i] < 33 || base[i] > 126)
			*erreur = 1;
		else
			i++;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		lbase;
	int		erreur;
	long	nb;

	lbase = 0;
	erreur = 0;
	ft_erreur(base, &erreur);
	nb = nbr;
	if (erreur == 0)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		while (base[lbase])
			lbase++;
		if (nb < lbase)
			ft_putchar(base[nb]);
		if (nb >= lbase)
		{
			ft_putnbr_base(nb / lbase, base);
			ft_putnbr_base(nb % lbase, base);
		}
	}
}

long int	ft_is_hexa(unsigned int i, char *s, va_list args)
{
	unsigned int hexa_nb;

	hexa_nb = 0;
	hexa_nb  = va_arg(args, unsigned int);
	ft_putnbr_base(16, s);
	i++;
	while (s[i] && s[i] != '%')
	{
		ft_putchar_fd(s[i], 1);
		i++;
	}
	return (hexa_nb);
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
	while (s[i] == '%')
	{
		if (s[i + 1] == '%')
		{
			ft_putchar_fd('%', 1);
			break;
		}
		else
			i++;
	}
	if (s[i]  == 's')
		ft_is_string(s[i], (char*)s, args);
	if (s[i] == 'i')
		ft_is_integer(s[i], (char*)s, args);
	if (s[i] == 'c')
		ft_is_character(s[i], (char*)s, args); 
	if (s[i] == 'u')
		ft_is_unsigned(s[i], (char*)s, args);
	if (s[i] == 'd')
		ft_is_decimal(s[i],(char*)s, args);
	if (s[i] == 'x' || s[i] == 'X')
		ft_is_hexa(s[i],(char*)s, args);
	/*if (s[i] == 'p')
		ft_is_pointer(s[i]); //unsigned long
	*/
	va_end (args);
	return (i); // length of the printed string (int)
}

#include <stdio.h>
int main(void)
{
	unsigned int	hexa_nb = 123456;
	//char *str = "Julia";
	//char	c = 'Y';
	//unsigned int u_nb = 123456;

	//	ft_printf("%d", nb);
	//	ft_printf("%s", str);
	//	ft_printf("%c", c);
	//	ft_printf("%u", u_nb);
	//	ft_printf("%p", nb);
	//	ft_printf("%i", nb);
		ft_printf("%x", hexa_nb);
		//ft_printf("%d\n", nb);
	return (0);
}

