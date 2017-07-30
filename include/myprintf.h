/*
** myprintf.h for my_printf in /home/gadrat_r/delivery/my_printf/PSU_2016_my_printf/include
**
** Made by Romain Gadrat
** Login   <gadrat_r@epitech.net>
**
** Started on  Wed Nov  9 19:17:01 2016 Romain Gadrat
** Last update Sun Nov 20 15:51:08 2016 Romain Gadrat
*/

#ifndef MYPRINTF_H_
# define MYPRINTF_H_

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

typedef struct	s_psf
{
  char		flag;
  int		(*psf)(va_list ap);
}		t_psf;

int		pGrandS(va_list);
int		pPetitO(va_list);
int		pPetitX(va_list);
int		pGrandX(va_list);
int		pPetitP(va_list);
int		pPetitB(va_list);
int		pPetitS(va_list);
int		pPetitU(va_list);
int		pPetitD(va_list);
int		pPetitI(va_list);
int		pPetitC(va_list);
int		pDiez(va_list);
int		pPlus(va_list);
int		pMoins(va_list);

int             my_putchar(char);
int             my_putstr(char *);
int             my_put_nbr(int);
int             my_strlen(char *);
int		my_put_nbr_base(unsigned int, char*);
int		before_S(char);

#endif /* !MYPRINTF_H_ */
