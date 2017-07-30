/*
** my_printf_addons.c for my_printf_addons in /home/gadrat_r/delivery/my_printf/PSU_2016_my_printf/src
**
** Made by Romain Gadrat
** Login   <gadrat_r@epitech.net>
**
** Started on  Fri Nov 11 01:28:47 2016 Romain Gadrat
** Last update Fri Nov 18 22:22:50 2016 Romain Gadrat
*/
#include "myprintf.h"

int	pGrandS(va_list ap)
{
  char	*s;
  int	i;

  s = va_arg(ap, char *);
  i = -1;
  if (s == NULL)
    my_putstr("(null)");
  else
    while (s[++i] != '\0')
      {
	if (s[i] < 32 || s[i] >= 127)
	  {
	    if (s[i] <= 7)
	      my_putstr("\\00");
	    else if ((s[i] > 7 && s[i] < 32) || (s[i] >= 127))
	      my_putstr("\\0");
	    else
	      my_putchar('\\');
	    my_put_nbr_base(s[i], "01234567");
	  }
	else
	  my_putchar(s[i]);
      }
  return (0);
}

int	pPetitO(va_list ap)
{
  my_put_nbr_base(va_arg(ap, unsigned int), "01234567");
  return (0);
}

int	pPetitX(va_list ap)
{
  my_put_nbr_base(va_arg(ap, unsigned int), "0123456789abcdef");
  return (0);
}

int	pGrandX(va_list ap)
{
  my_put_nbr_base(va_arg(ap, unsigned int), "0123456789ABCDEF");
  return (0);
}

int	pPetitP(va_list ap)
{
  char	*tmp;

  tmp =  va_arg(ap, char *);
  if (tmp == NULL)
    my_putstr("(nil)");
  else
    {
      my_putstr("0x");
      my_put_nbr_base((unsigned long) tmp, "0123456789abcdef");
    }
  return (0);
}
