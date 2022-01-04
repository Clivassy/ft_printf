/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbatoro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:55:35 by jbatoro           #+#    #+#             */
/*   Updated: 2021/12/19 18:18:40 by jbatoro          ###   ########.f/Users/juliabatoro/Desktop/42/TRONC COMMUN/Cercle_01/ft_printfr       */
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
void	    ft_putchar(int c, int *count);
void	    ft_search_format(va_list args, int *count, const char s);
void	    ft_is_hexa(unsigned int nb, const char c, int *count);
void	    ft_is_i_or_d(int nb, int *count);
void	    ft_is_pointer(unsigned long long ptr, int *count);
void	    ft_print_str(char *str, int *count);
void	    ft_print_unsigned(unsigned int n, int *count);
char		*ft_utoa(unsigned int nb);
char	    *ft_strncpy(char *dest, char *src, int n);
#endif