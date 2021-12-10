/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbatoro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 11:13:58 by jbatoro           #+#    #+#             */
/*   Updated: 2021/12/10 16:53:52 by jbatoro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "printf.h"

int ft_printf(const char *s, ...)
{
	int i;
	char *string;

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
		while (s[i]== '%')
			i++;
		if (s[i]  == 's')
		{
			string = va_arg(args, char *);
			ft_putchar_fd(string[i], 1);
			i++;
		}
	}
	va_end (args);
	return (i);
}

int main(void)
{
	int nb = 20;
	char *str = "ca va?";

	ft_printf("Hello ca va ?\n");
	ft_printf("%s", str);
	//ft_printf("%s/%d\n", "Nice", 20);
	return (0);
}
