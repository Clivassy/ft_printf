/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbatoro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 19:10:17 by jbatoro           #+#    #+#             */
/*   Updated: 2021/12/13 12:32:31 by jbatoro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libprintf.h"
#include <stdio.h>


 

int ft_printf(const char *s, ...)
{
	unsigned int i;

	i = 0;

	va_list args;
	va_start (args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			if (s[i + 1] == '%')
				ft_putchar_fd('%', 1);
			i++;
			while (s[i] && s[i] != '%')
			{
				if (s[i] == 'c')
					ft_is_character(s[i], (char*)s, args);
				if (s[i]  == 's')
					ft_is_string(s[i], (char*)s, args);
				if (s[i] == 'p')
				{
					ft_putchar_fd('0', 1);
    				ft_putchar_fd('x', 1);
					ft_is_pointer(s[i],(char*)s, args);
				}
				if (s[i] == 'd')
					ft_is_decimal(s[i],(char*)s, args);
				if (s[i] == 'i')
					ft_is_integer(s[i], (char*)s, args);
				if (s[i] == 'u')
					ft_is_unsigned(s[i], (char*)s, args);
				if (s[i] == 'x' || s[i] == 'X')
					ft_is_hexa(s[i],(char*)s, args);
				break;
			}
			i++;
		}
		ft_putchar_fd(s[i], 1);
		i++;
	}
	va_end (args);
	return (i);
}

#include <stdio.h>
int main()
{
//	void	*pointer_to_main = (void *) main;
	//char str[] = "hello";
	//char str2[] = "je m appelle julia";
	//ft_printf("Print an integer : %d\nPrint a second integer : %d\nPrint a third integer : %d\n", 875, 58, 456);
	//	ft_printf("Print a neg integer : %d\nDone\n", -8);
	//	ft_printf("Print a string : %s\nSecond string : %s\n", str, str2);
	//	ft_printf("Print an integer : %i. Done\n", 123);
	//	ft_printf("Print a pointer adress : %p\nDone\n", pointer_to_main);
	//	printf("Print a pointer adress : %p\nDone\n", pointer_to_main);
		ft_printf("Print an hex integer : %x. Done\n", 10);
		printf("Print an hex integer : %x. Done\n", 10);
	//	ft_printf("Print a neg integer : %X. Done\n", -8);
	//	ft_printf("Print a character : %c\n", 'c');
}

