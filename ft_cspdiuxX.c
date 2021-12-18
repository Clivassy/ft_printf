#include "ft_printf.h"

int    ft_putchar(int c)
{
    write(1, &c, 1);
	return (1);
}

int	ft_printpercent(void)
{
	ft_putchar('%');
	return (1);
}

int     ft_cspdiuxX(va_list args, const char s)
{
	int count; 
	count = 0;
    	if (s == 'c')
		    count += ft_putchar(va_arg(args, int));
		if (s  == 's')
			count += ft_print_str(va_arg(args, char *));
		if (s == 'p')
		{
			ft_putchar('0');
    		ft_putchar('x');
			count += ft_pointer_len(ft_is_pointer(args));
		} 
		if (s == 'd')
			count +=  ft_len_int(ft_is_i_or_d(args));
		if (s == 'i')
			count += ft_len_int(ft_is_i_or_d(args));
		if (s == 'u')
			count += ft_len_unsigned(ft_is_unsigned(args));
		if (s == 'x' || s == 'X')
			count += ft_len_unsigned(ft_is_hexa(args, s));
		if (s == '%')
			count += ft_printpercent();
	return (count);
}