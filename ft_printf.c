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
#include "libftprintf.h"

int ft_printf(const char *s, ...)
{
	unsigned int i;
	unsigned int count;

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
			count = ft_return(i, count, s, args);
			if (s[i])
				i++;
		}
		if (!s[i])
			break;
		if (s[i] != '%')
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


  /*ft_printf("char : %c\n | string : %s\n | int : %d | unsigned :%u | pointer : %p", 'a', "hello", 10, 42516547, new_pointer);
  ft_printf("Print max int: %d\nPrint min int: %d\n", 2147483647, -2147483648);
  ft_printf("----------------\n");
  ft_printf("Print max int: %i\nPrint min int: %i\n", 2147483647, -2147483648);
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
  ft_printf("----------------\n");
  ft_printf("%%hello\n");
  printf("%%hello\n");
  ft_printf("----------------\n");
  ft_printf("%%%%%\n", "hello");
  printf("%%%%%\n", "hello");
  ft_printf("----------------\n");
  ft_printf("%");
  printf("%");
  ft_printf("----------------\n");
  ft_printf("%%\n");
  printf("%%\n");
  ft_printf("----------------\n");
  ft_printf("%s%\n", "Hello");
  printf("%s%\n","Hello"); 
  */

