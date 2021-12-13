int ft_printf(const char *s, ...)
{
	unsigned int i;

	i = 0;

	va_list args;
	va_start (args, s);
	while (s[i] && s[i] != '%')
	{
		ft_putchar_fd(s[i], 1);
		i++;
	}
	if (s[i] == '%')
	{
		if (s[i + 1] == '%')
				ft_putchar_fd('%', 1);
			i++;
			while (s[i] && s[i] != '%')
			{
				if (s[i]  == 's')
					ft_is_string(s[i], (char*)s, args);
				if (s[i] == 'i')
					ft_is_integer(s[i], (char*)s, args);
				if (s[i] == 'c')
					ft_is_character(s[i], (char*)s, args); 
					//	if (s[i] == 'u')
					//		ft_is_unsigned(s[i], (char*)s, args);
				if (s[i] == 'd')
					ft_is_decimal(s[i],(char*)s, args);
					//	if (s[i] == 'x' || s[i] == 'X')
					//	ft_is_hexa(s[i],(char*)s, args);
					/*if (s[i] == 'p')
					  ft_is_pointer(s[i]); //unsigned long
					  */
				
				while (s[i] != '%')
				{
					ft_putchar_fd(s[i], 1);
					i++;
				}
			}
	}
	va_end (args);
	return (i); // length of the printed string (int)
}