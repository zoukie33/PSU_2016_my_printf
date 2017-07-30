/*
** my_strlen.c for my_strlen in /home/romain_g/delivery/CPool_Day04
** 
** Made by romain gadrat
** Login   <romain_g@epitech.net>
** 
** Started on  Thu Oct  6 16:49:14 2016 romain gadrat
** Last update Thu Oct  6 17:05:56 2016 romain gadrat
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      i = i + 1;
    }
  return (i);
}
