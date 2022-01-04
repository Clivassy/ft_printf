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
			ft_search_format(args, &len_return, s[i + 1]);
			i++;
		}
		else
		{
			ft_putchar(s[i], &len_return);
		}
		i++;
	}
	va_end (args);
	//printf("%d", len_return);
	return (len_return);
}

/*int main()
{
	int returned; 
	int *n = 0;

	char *str = 0;
	returned = printf("%s", str);
	printf("%d\n", returned);
	ft_printf("%s", str);

	printf("\n");
	returned = printf("%d", 45);
	printf("%d\n", returned);
	ft_printf("%d", 45);

	printf("\n");
	returned = printf("%p", n);
	printf("%d\n", returned);
	ft_printf("%p", n);
	ft_printf("%%"); 
	//printf(("%%"));
}*/