/*
** my_printf.c for Project-Master in /home/gadrat_r/delivery/my_printf/PSU_2016_my_printf
**
** Made by Romain Gadrat
** Login   <romain.gadrat@epitech.eu>
**
** Started on  Wed Nov  9 15:32:14 2016 Romain Gadrat
** Last update Sat Nov 19 16:18:58 2016 Romain Gadrat
*/
#include "myprintf.h"

void		my_next_list(t_psf *flags_tab)
{
  flags_tab[11].flag = '#';
  flags_tab[12].psf = &pDiez;
  flags_tab[13].flag = '+';
  flags_tab[13].psf = &pPlus;
  flags_tab[14].flag = '-';
  flags_tab[14].psf = &pMoins;
}

void		my_list(t_psf *flags_tab)
{
  flags_tab[0].flag = 'd';
  flags_tab[0].psf = &pPetitD;
  flags_tab[1].flag = 'i';
  flags_tab[1].psf = &pPetitI;
  flags_tab[2].flag = 'c';
  flags_tab[2].psf = &pPetitC;
  flags_tab[3].flag = 's';
  flags_tab[3].psf = &pPetitS;
  flags_tab[4].flag = 'u';
  flags_tab[4].psf = &pPetitU;
  flags_tab[5].flag = 'b';
  flags_tab[5].psf = &pPetitB;
  flags_tab[6].flag = 'x';
  flags_tab[6].psf = &pPetitX;
  flags_tab[7].flag = 'X';
  flags_tab[7].psf = &pGrandX;
  flags_tab[8].flag = 'o';
  flags_tab[8].psf = &pPetitO;
  flags_tab[9].flag = 'S';
  flags_tab[9].psf = &pGrandS;
  flags_tab[10].flag = 'p';
  flags_tab[10].psf = &pPetitP;
  my_next_list(flags_tab);
}

int		my_exec_flags(char f, va_list ap)
{
  int		i;
  t_psf		flags_tab[15];

  my_list(flags_tab);
  i = -1;
  while (++i < 15)
    if (f == flags_tab[i].flag)
      {
	flags_tab[i].psf(ap);
	i = 16;
      }
  if (i == 15)
    my_putchar('%');

  return (0);
}

int		my_printf(char *format, ...)
{
  va_list	ap;
  int		i;

  i = -1;
  va_start(ap, format);
  while (format[++i] != '\0')
    if (format[i] == '%')
      my_exec_flags(format[++i], ap);
    else
      my_putchar(format[i]);
  va_end(ap);
  return (0);
}
