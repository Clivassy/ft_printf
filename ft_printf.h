/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbatoro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:55:35 by jbatoro           #+#    #+#             */
/*   Updated: 2021/12/19 18:18:40 by jbatoro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <string.h>
# include <strings.h>
# include <unistd.h>
# include <stdlib.h>

int			ft_printf(const char *s, ...);
int			ft_putchar(int c);
int			ft_print_percent(void);
int			ft_cspdiux(va_list args, const char s);
void		ft_putnbr_base_hexa(unsigned int nbr, char *base);
int			ft_is_hexa(unsigned int nb, const char c);
int			ft_len_unsigned(unsigned int nb);
void		ft_putnbr_int(int n);
int			ft_is_i_or_d(int nb);
int			ft_len_int(int nb);
void		ft_putnbr_base_pointer(uintptr_t nbr, char *base);
int			ft_pointer_len(uintptr_t nb);
int			ft_is_pointer(unsigned long long ptr);
int			ft_print_str(char *str);
char		*ft_putstr(char *str);
void		ft_putnbr_unsigned(unsigned n);
int			ft_print_unsigned(unsigned int n);
char		*ft_utoa(unsigned int nb);
int			ft_len_itoa(unsigned int nb);
char	    *ft_strncpy(char *dest, char *src, unsigned int n);
#endif
