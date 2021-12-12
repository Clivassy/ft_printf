#include "libprintf.h"

int	ft_is_character(unsigned int i, char *s, va_list args)
{
	int character;

	character = 0;
	character = va_arg(args, int);
	ft_putchar_fd(character, 1);
	i++;
	while (s[i] && s[i] != '%')
	{
		ft_putchar_fd(s[i], 1);
		i++;
	}
	return (character);
}