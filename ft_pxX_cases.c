#include "libprintf.h"

unsigned long *ft_is_pointer(unsigned int i, char *s, va_list args)
{
    unsigned long	adress;
	unsigned long	*result;
	
    char  base[] = "0123456789abcdef";
    adress = va_arg(args, unsigned long);
    ft_putnbr_base_pointer(adress, base);
    i++;
	result = &adress;
    return (result);
}

 unsigned int	ft_is_hexa(unsigned int i, char *s, va_list args)
  {
  unsigned int hexa_nb;
  char base[] = "0123456789abcdef";

  hexa_nb = 0;
  hexa_nb  = va_arg(args, unsigned int);
  ft_putnbr_base(hexa_nb, base);
  return (hexa_nb);
  }

 unsigned int	ft_is_HEXA(unsigned int i, char *s, va_list args)
  {
  unsigned int hexa_nb;
  char base[] = "0123456789ABCDEF";

  hexa_nb = 0;
  hexa_nb  = va_arg(args, unsigned int);
  ft_putnbr_base(hexa_nb, base);
  return (hexa_nb);
  }
