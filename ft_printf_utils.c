#include "libftprintf.h"

void	ft_putchar(int c, int *count)
{
	write(1, &c, 1);
	*count += 1;
}

char	*ft_strncpy(char *dest, char *src, int n)
{
	int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
