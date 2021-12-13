#include "libprintf.h"

char	*ft_is_string(unsigned int i, char *s, va_list args)
{
	char *string;

		string = va_arg(args, char *);
		ft_putstr_fd(string, 1);
		i++;
		return (string);
}