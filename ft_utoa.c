#include "libprintf.h"

static int	ft_len(long nb)
{
	int		len;

	len = 0;
	if (nb <= 0)
		len = 1;
	while (nb != 0)
	{
		len++;
		nb = nb / 10;
	}
	return (len);
}

static char	*ft_pos_or_neg(char *s, long nb, int n)
{
	if (nb < 0)
	{
		s[0] = '-';
		nb = nb * (-1);
	}
	while (nb > 0)
	{
		s[n] = 48 + (nb % 10);
		nb = nb / 10;
		n--;
	}
	return (s);
}

char	*ft_utoa(unsigned int n)
{
	unsigned int		len;
	long	nb;
	char	*s_itoa;

	nb = n;
	len = ft_len(nb);
	s_itoa = (char *)malloc(sizeof(char) * (len + 1));
	if (!s_itoa)
		return (NULL);
	s_itoa[len--] = '\0';
	if (nb == 0)
	{
		s_itoa[0] = 48;
		return (s_itoa);
	}
	s_itoa = ft_pos_or_neg(s_itoa, nb, len);
	return (s_itoa);
}