#include "libftprintf.h"

int     ft_return(unsigned int i, unsigned int count, const char *s, va_list args)
{
    while (s[i] != '%')
	{
        if (s[i] == 'c')
		{
	    	count++;
			ft_is_character(args);
		}
		if (s[i]  == 's')
			count = count + ft_strlen(ft_is_string(args));
		if (s[i] == 'p')
		{
			ft_putchar_fd('0', 1);
    		ft_putchar_fd('x', 1);
			count = count + ft_number_len(ft_is_pointer(args));
		}
		if (s[i] == 'd')
			count = count + ft_count_unsigned(ft_is_decimal(args));
		if (s[i] == 'i')
			count = count + ft_count_unsigned(ft_is_integer(args));
		if (s[i] == 'u')
			count = count + ft_count_unsigned(ft_is_unsigned(args));
		if (s[i] == 'x')
			count = count + ft_count_unsigned(ft_is_hexa(args));
		if (s[i] == 'X')
			count = count + ft_count_unsigned(ft_is_HEXA(args));
        break;
    }
    return (count);
}