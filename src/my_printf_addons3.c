/*
** my_printf_addons3.c for my_print_addons3 in /home/gadrat_r/delivery/my_printf/PSU_2016_my_printf_psf/src
**
** Made by Romain Gadrat
** Login   <gadrat_r@epitech.net>
**
** Started on  Fri Nov 18 00:50:10 2016 Romain Gadrat
** Last update Fri Nov 18 00:53:50 2016 Romain Gadrat
*/

#include "myprintf.h"

int	pPetitC(va_list ap)
{
  my_putchar((char) va_arg(ap, int));
  return (0);
}

int	pDiez(va_list ap)
{
  return (0);
}

int	pPlus(va_list ap)
{
  return (0);
}

int	pMoins(va_list ap)
{
  return (0);
}
