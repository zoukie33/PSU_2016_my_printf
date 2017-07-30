/*
** my_putchar.c for my_putchar in /home/romain_g/delivery/CPool_Day04
** 
** Made by romain gadrat
** Login   <romain_g@epitech.net>
** 
** Started on  Thu Oct  6 10:23:56 2016 romain gadrat
** Last update Tue Oct 11 10:50:34 2016 romain gadrat
*/
#include <unistd.h>
void	my_putchar(char z)
{
  write(1,&z,1);
}
