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
					count = count + ft_strlen(ft_is_string(s[i], (char*)s, args));
				if (s[i] == 'p')
				{
					ft_putchar_fd('0', 1);
    				ft_putchar_fd('x', 1);
					count = count + ft_number_len(ft_is_pointer(s[i],(char*)s, args));
				}
				if (s[i] == 'd')
					count = count + ft_count_int_nb(ft_is_decimal(s[i],(char*)s, args));
				if (s[i] == 'i')
					count = count + ft_count_int_nb(ft_is_integer(s[i], (char*)s, args));
				if (s[i] == 'u')
					count = count + ft_count_unsigned(ft_is_unsigned(s[i], (char*)s, args));
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
//	printf("%d", count);
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

		ft_printf("Print max int: %d\nPrint min int:%d\n", 2147483647, -2147483648);
		ft_printf("----------------\n");
		ft_printf("Print max int: %i\nPrint min int:%i\n", 2147483647, -2147483648);
		ft_printf("----------------\n");
		ft_printf("Print a string : %s\n", "Hello, comment ca va?\nCa va!");
		ft_printf("----------------\n");
		ft_printf("Print first ascii char : %c\nPrint last ascii char : %c\n", '!', '-');
		ft_printf("----------------\n");
		ft_printf("Printf hex integer : %x\n", 123);
		printf("Real printf : %x\n", 123);
		ft_printf("----------------\n");
		ft_printf("Print HEX integer : %X\n", 45);
		printf("Real printf : %X\n", 45);
		ft_printf("----------------\n");
		ft_printf("Print a pointer adress : %p\n", new_pointer);
		printf("Real printf : %p\n", new_pointer);
		ft_printf("----------------\n");
		ft_printf("Print max unsigned int : %u\n", 4294967295);
		printf("Real printf: %ld\n", 4294967295);
}

