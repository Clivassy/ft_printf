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
	unsigned int count;
	char *stock;

	count = 0;
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
			while (s[i] != '%')
			{
				if (s[i] == 'c')
				{
					count++;
					ft_is_character(s[i], (char*)s, args);
				}
				if (s[i]  == 's')
					count = ft_strlen(ft_is_string(s[i], (char*)s, args));
				if (s[i] == 'p')
				{
					ft_putchar_fd('0', 1);
    				ft_putchar_fd('x', 1);
					count = ft_number_len(ft_is_pointer(s[i],(char*)s, args));
				}
				if (s[i] == 'd')
					/*count = ft_number_len(*/ft_is_decimal(s[i],(char*)s, args);
				if (s[i] == 'i')
					ft_is_integer(s[i], (char*)s, args);
				if (s[i] == 'u')
					ft_is_unsigned(s[i], (char*)s, args);
				if (s[i] == 'x')
					ft_is_hexa(s[i],(char*)s, args);
				if (s[i] == 'X')
					ft_is_HEXA(s[i],(char*)s, args);
				break;
			}
			if (s[i])
				i++;
		}
		if (!s[i])
			break;
		ft_putchar_fd(s[i], 1);
		i++;
		count++;
	}
	va_end (args);
	printf("%d", count);
	return (count);
}

#include <stdio.h>
int main()
{
	void	*new_pointer;
	int a;
	new_pointer = &a;

	char *test; 
	char c = 'Y';
	test = &c;
	char str[] = "Julia est belle";
	//char str2[] = "je m appelle julia";
	//ft_printf("Print an integer : %d\nPrint a second integer : %d\nPrint a third integer : %d\n", 875, 58, 456);
	//	ft_printf("Print a neg integer : %d\nDone\n", -8);
		//ft_printf("Print a string : %s\nSecond string : %s\n", str, str2);
		//ft_printf("%p\n%c", new_pointer, 'c');
	//	ft_printf("%i", 123);
		ft_printf("Print a pointer adress : %p\nString : %s\nnumber : %d\nHexa nb : %X\n", new_pointer, str, 15, 10);
		//printf("Print a pointer adress : %p\nDone\n", new_pointer);
		//ft_printf("Print a pointer adress : %p\nDone\n", test);
		//printf("Print a pointer adress : %p\nDone\n", test);
	//	ft_printf("Print an hex integer : %x. Done\n", 123);
	//	printf("Print an hex integer : %x. Done\n", 123);
	//	ft_printf("Print a neg integer : %X. Done\n", -8);
	//	ft_printf("Print a character : %c\n", 'c');
}

