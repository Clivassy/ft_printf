#include "libftprintf.h"

unsigned long *ft_is_pointer(va_list args)
{
    unsigned long	adress;
	unsigned long	*result;
	
    char  base[] = "0123456789abcdef";
    adress = va_arg(args, unsigned long);
    ft_putnbr_base_pointer(adress, base);
	result = &adress;
    return (result);
}

 unsigned int	ft_is_hexa (va_list args)
  {
  unsigned int hexa_nb;
  char base[16];
  strncpy(base, "0123456789abcdef", sizeof(base));

  hexa_nb = 0;
  hexa_nb  = va_arg(args, unsigned int);
  ft_putnbr_base(hexa_nb, base);
  return (hexa_nb);
  }

 unsigned int	ft_is_HEXA(va_list args)
  {
  unsigned int hexa_nb;
  char base[16];
  strncpy(base, "0123456789ABCDEF", sizeof(base));

  hexa_nb = 0;
  hexa_nb  = va_arg(args, unsigned int);
  ft_putnbr_base(hexa_nb, base);
  return (hexa_nb);
  }
