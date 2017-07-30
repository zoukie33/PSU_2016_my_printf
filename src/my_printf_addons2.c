/*
** my_printf_addons2.c for my_printf_addons2 in /home/gadrat_r/delivery/my_printf/PSU_2016_my_printf_psf/src
**
** Made by Romain Gadrat
** Login   <gadrat_r@epitech.net>
**
** Started on  Fri Nov 18 00:42:20 2016 Romain Gadrat
** Last update Fri Nov 18 00:49:14 2016 Romain Gadrat
*/

#include "myprintf.h"

int	pPetitB(va_list ap)
{
  my_put_nbr_base(va_arg(ap, unsigned int), "01");
  return (0);
}

int	pPetitS(va_list ap)
{
  char	*str;

  str = va_arg(ap, char *);
  if (str == NULL)
    my_putstr("(null)");
  else
    my_putstr(str);
  return (0);
}

int	pPetitU(va_list ap)
{
  my_put_nbr_base(va_arg(ap, unsigned int), "0123456789");
  return (0);
}

int	pPetitD(va_list ap)
{
  my_put_nbr(va_arg(ap, int));
  return (0);
}

int	pPetitI(va_list ap)
{
  my_put_nbr(va_arg(ap, int));
  return (0);
}
