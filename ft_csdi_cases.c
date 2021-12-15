#include "libprintf.h"

char	*ft_is_string(unsigned int i, char *s, va_list args)
{
	char *string;
	unsigned int len;

		string = va_arg(args, char *);
		ft_putstr_fd(string, 1);
		return (string);
}

int	ft_is_character(unsigned int i, char *s, va_list args)
{
	int character;

	character = 0;
	character = va_arg(args, int);
	ft_putchar_fd(character, 1);
	return (character);
}

int	ft_is_integer(unsigned int i, char *s, va_list args)
{
	int	nb;

	nb = 0;
		nb = va_arg(args, int);
		ft_putnbr_unsigned_fd(nb, 1);
	return (nb);
}

unsigned int	ft_is_unsigned(unsigned int i, char *s, va_list args)
{
	unsigned int u_nb;
	char *str;

	u_nb = 0;
	u_nb = va_arg(args, unsigned int);
	ft_putnbr_unsigned_fd(u_nb, 1);
	i++;
	return (u_nb);
}
int	ft_is_decimal(unsigned int i, char *s, va_list args)
{
	int	nb;

	nb = 0;
	nb  = va_arg(args, int);
	ft_putnbr_unsigned_fd(nb, 1);
	return (nb);
}