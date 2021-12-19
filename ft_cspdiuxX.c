#include "ft_printf.h"

int    ft_putchar(int c)
{
    write(1, &c, 1);
	return (1);
}

int	ft_print_percent(void)
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
			count += ft_is_pointer(va_arg(args, unsigned long long));
		if (s == 'd')
			count += ft_is_i_or_d(va_arg(args, int));
		if (s == 'i')
			count += ft_is_i_or_d(va_arg(args, int));
		if (s == 'u')
			count += ft_print_unsigned(va_arg(args, unsigned int));
		if (s == 'x' || s == 'X')
			count += ft_is_hexa(va_arg(args, unsigned int), s);
		if (s == '%')
			count += ft_print_percent();
	return (count);
}