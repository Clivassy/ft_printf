/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libprintf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbatoro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 13:40:59 by jbatoro           #+#    #+#             */
/*   Updated: 2021/12/10 16:05:51 by jbatoro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <string.h>
# include <strings.h>
# include <unistd.h>
# include <stdlib.h>

# include <stdio.h>

int             ft_printf(const char *s, ...);
int             ft_putchar(int c);
int	            ft_printpercent(void);
int             ft_cspdiuxX(va_list args, const char s);
void	ft_putnbr_base_hexa(unsigned int nbr, char *base);
int	            ft_is_hexa(unsigned int nb, const char c);
int	            ft_len_unsigned(unsigned int nb);
void	        ft_putnbr_int(int n);
int	            ft_is_i_or_d(va_list args);
int	            ft_len_int(int nb);
void	        ft_putnbr_base_pointer(unsigned long nbr, char *base);
int             ft_pointer_len(unsigned long *nb);
unsigned long   *ft_is_pointer(va_list args);
int	            ft_print_str(char *str);
void            ft_putstr(char *str);
void	        ft_putnbr_unsigned(unsigned n);
unsigned int	ft_is_unsigned(va_list args);
#endif
