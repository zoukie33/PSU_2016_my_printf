/*
** my_putstr.c for my_putstr in /home/romain_g/delivery/CPool_Day04
** 
** Made by romain gadrat
** Login   <romain_g@epitech.net>
** 
** Started on  Thu Oct  6 16:28:28 2016 romain gadrat
** Last update Tue Oct 11 10:56:20 2016 romain gadrat
*/
void	my_putchar(char z);
int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
  return (0);
}
