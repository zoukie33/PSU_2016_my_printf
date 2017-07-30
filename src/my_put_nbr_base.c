/*
** my_put_nbr_base.c for my_put_nbr_base in /home/gadrat_r/delivery/my_functions
**
** Made by Romain Gadrat
** Login   <gadrat_r@epitech.net>
**
** Started on  Thu Nov 10 14:27:13 2016 Romain Gadrat
** Last update Fri Nov 11 01:09:22 2016 Romain Gadrat
*/

void	my_putchar(char);
int	my_strlen(char *);
int	my_put_nbr_base(unsigned int nb, char *base)
{
  unsigned int	r;

  r = nb % my_strlen(base);
  nb = nb / my_strlen(base);
  if (nb > 0)
    my_put_nbr_base(nb, base);
  my_putchar(base[r]);
  return (0);
}
