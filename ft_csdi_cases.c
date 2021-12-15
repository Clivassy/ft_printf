#include "libftprintf.h"

char	*ft_is_string(va_list args)
{
	char *string;

		string = va_arg(args, char *);
		ft_putstr_fd(string, 1);
		return (string);
}

int	ft_is_character(va_list args)
{
	int character;

	character = 0;
	character = va_arg(args, int);
	ft_putchar_fd(character, 1);
	return (character);
}

int	ft_is_integer(va_list args)
{
	int	nb;

	nb = 0;
		nb = va_arg(args, int);
		ft_putnbr_unsigned_fd(nb, 1);
	return (nb);
}

unsigned int	ft_is_unsigned(va_list args)
{
	unsigned int u_nb;

	u_nb = 0;
	u_nb = va_arg(args, unsigned int);
	ft_putnbr_unsigned_fd(u_nb, 1);
	return (u_nb);
}
int	ft_is_decimal(va_list args)
{
	int	nb;

	nb = 0;
	nb  = va_arg(args, int);
	ft_putnbr_unsigned_fd(nb, 1);
	return (nb);
}