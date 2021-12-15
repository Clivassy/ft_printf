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

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <string.h>
# include <strings.h>
# include <unistd.h>

int		        ft_printf(const char *s, ...);
char	        *ft_is_string(va_list args);
int             ft_is_integer(va_list args);
int	            ft_is_character (va_list args);
int             ft_is_decimal(va_list args);
unsigned int	ft_is_unsigned(va_list args);
unsigned long   *ft_is_pointer(va_list args);
unsigned int	ft_is_hexa(va_list args);
unsigned int	ft_is_HEXA(va_list args);
int	            ft_len(unsigned int count, char *str);
int             ft_number_len(unsigned long *nb);
int	            ft_count_int_nb(int nb);
unsigned int	ft_count_unsigned(unsigned int nb);
void	        ft_putnbr_base_pointer(unsigned long nbr, char *base);
void            ft_putchar_fd(char c, int fd);
void            ft_putstr_fd(char *str, int fd);
void	        ft_putnbr_unsigned_fd(unsigned n, int fd);
size_t          ft_strlen(char *str);
void	        ft_putnbr_base(unsigned int nbr, char *base);
int     ft_return(unsigned int i, unsigned int count, const char *s, va_list args);
#endif
