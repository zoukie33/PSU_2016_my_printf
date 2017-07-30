/*
** my_put_nbr.c for my_put_nbr in /home/romain_g/delivery/CPool_Day03
** 
** Made by romain gadrat
** Login   <romain_g@epitech.net>
** 
** Started on  Thu Oct  6 00:27:41 2016 romain gadrat
** Last update Tue Oct 11 10:53:29 2016 romain gadrat
*/
void	my_putchar(char z);
int	si(int nb)
{
  if (nb < 0)
    {
      my_putchar(45);
      nb = nb * -1;
    }
  if (nb == 0)
    {
      return (0);
    }
  return (nb);
}

int	my_div(int nb)
{
  int	div;

  div = 1;
  while (nb > 9)
    {
      div = div * 10;
      nb = nb / 10;
    }
  return (div);
}

int	my_put_nbr(int nb)
{
  int	div;
  int	tmp;

  nb = si(nb);
  div = my_div(nb);
  while (div != 0)
    {
      tmp = nb / div;
      nb = nb % div;
      div = div / 10;
      my_putchar(tmp + 48);
    }
  return (0);
}
