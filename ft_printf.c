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

unsigned long ft_is_pointer(unsigned int i, char *s, va_list args)
{
	void	*n;

	ft_putchar_fd('0', 1);
	ft_putchar_fd('x', 1);
	n = va_arg(args, void *);
}

unsigned int	ft_is_hexa(unsigned int i, char *s, va_list args)
{
	unsigned int hexa_nb;

	hexa_nb = 0;
	hexa_nb  = va_arg(args, unsigned int);
	
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
	void	*pointer_to_main = (void *) main;

	ft_printf("Print an integer : %d. Done\n", 8);
	ft_printf("Print a neg integer : %d. Done\n", -8);
	ft_printf("Print a string : %s. Done\n", "Hello c'est Julia");
	ft_printf("Print an integer : %i. Done\n", 123);
	ft_printf("Print a pointer adress : %p. Done\n", pointer_to_main);
	ft_printf("Print an hex integer : %x. Done\n", 10);
	//ft_printf("Print a neg integer : %X. Done\n", -8);
	return (0);
}

