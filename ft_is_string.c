#include "libprintf.h"
#include <stdio.h>

char	*ft_is_string(unsigned int i, char *s, va_list args)
{
	char *string;
	unsigned int len;

		string = va_arg(args, char *);
		ft_putstr_fd(string, 1);
		return (string);
}

int	ft_len(unsigned int count, char *str)
{
	count = ft_strlen(str);
	return (count);
}