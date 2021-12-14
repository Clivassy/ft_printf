/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_integer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbatoro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 11:48:09 by jbatoro           #+#    #+#             */
/*   Updated: 2021/12/13 12:32:55 by jbatoro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int	ft_is_integer(unsigned int i, char *s, va_list args)
{
	int	nb;

	nb = 0;
		nb = va_arg(args, int);
		ft_putnbr_fd(nb, 1);
	return (nb);
}
