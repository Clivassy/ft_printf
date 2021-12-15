#include "libprintf.h"
#include <stdio.h>

int ft_printf(const char *s, ...)
{
	unsigned int i;
	unsigned int count;

	count = 0;
	i = 0;

	va_list args;
	va_start (args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			if (s[i + 1] == '%')
				ft_putchar_fd('%', 1);
			i++;
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
			if (s[i])
				i++;
		}
		if (!s[i])
			break;
		if (s[i] != '%')
			ft_putchar_fd(s[i], 1);
		i++;
		count++;
	}
	va_end (args);
	//printf("%d", count);
	return (count);
}

#include <stdio.h>
int main()
{
	/*void	*new_pointer;
	int a;
	new_pointer = &a;

	char *test; 
	test = &c;

		ft_printf("Print max int: %d\nPrint min int:%d\n", 2147483647, -2147483648);
		ft_printf("----------------\n");
		ft_printf("Print max int: %i\nPrint min int:%i\n", 2147483647, -2147483648);
		ft_printf("----------------\n");
		ft_printf("Print a string : %s\n", "Hello, comment ca va?\nCa va!");
		ft_printf("----------------\n");
		ft_printf("Print first ascii char : %c\nPrint last ascii char : %c\n", '!', '-');
		ft_printf("----------------\n");
		ft_printf("Printf hex integer : %x\n", 123);
		printf("Real printf : %x\n", 123);
		ft_printf("----------------\n");
		ft_printf("Print HEX integer : %X\n", 45);
		printf("Real printf : %X\n", 45);
		ft_printf("----------------\n");
		ft_printf("Print a pointer adress : %p\n| And another : %p", new_pointer);
		printf("Real printf : %p\n", new_pointer);
		ft_printf("----------------\n");
		ft_printf("Print max unsigned int : %u\n", 4294967295);
		printf("Real printf: %ld\n", 4294967295);
		ft_printf("----------------\n");
		ft_printf("%%hello\n");
		printf("%%hello\n");
		*/
		ft_printf("----------------\n");
		ft_printf("%%%%%\n", "hello");
		printf("%%%%%\n", "hello");
		ft_printf("----------------\n");
		ft_printf("%");
		printf("%");
		ft_printf("----------------\n");
		ft_printf("%%\n");
		printf("%%\n");
		ft_printf("----------------\n");
		ft_printf("%s%\n", "hello\n");
		printf("%s%\n","Hello");
}
