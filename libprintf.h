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

#ifndef LIBPRINTF_H
# define LIBPRINTF_H

# include <stdarg.h>
# include "libft.h"

int		        ft_printf(const char *s, ...);
char	        *ft_is_string(unsigned int i, char *s, va_list args);
int             ft_is_integer(unsigned int i, char *s, va_list args);
int	            ft_is_character(unsigned int i, char *s, va_list args);
int             ft_is_decimal(unsigned int i, char *s, va_list args);
unsigned int	ft_is_unsigned(unsigned int i, char *s, va_list args);

#endif
