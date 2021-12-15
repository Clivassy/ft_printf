#include "libprintf.h"

int     ft_return(unsigned int i, unsigned int count, const char *s, va_list args)
{
    while (s[i] != '%')
	{
        if (s[i] == 'c')
		{
	    	count++;
			ft_is_character(s[i], (char*)s, args);
		}
		if (s[i]  == 's')
			count = count + ft_strlen(ft_is_string(s[i], (char*)s, args));
		if (s[i] == 'p')
		{
			ft_putchar_fd('0', 1);
    		ft_putchar_fd('x', 1);
			count = count + ft_number_len(ft_is_pointer(s[i],(char*)s, args));
		}
		if (s[i] == 'd')
			count = count + ft_count_unsigned(ft_is_decimal(s[i],(char*)s, args));
		if (s[i] == 'i')
			count = count + ft_count_unsigned(ft_is_integer(s[i], (char*)s, args));
		if (s[i] == 'u')
			count = count + ft_count_unsigned(ft_is_unsigned(s[i], (char*)s, args));
		if (s[i] == 'x')
			count = count + ft_count_unsigned(ft_is_hexa(s[i],(char*)s, args));
		if (s[i] == 'X')
			count = count + ft_count_unsigned(ft_is_HEXA(s[i],(char*)s, args));
        break;
    }
    return (count);
}