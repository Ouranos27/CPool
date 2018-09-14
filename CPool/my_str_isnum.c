/*
** my_str_isnum.c for my_sr_isnum.c in /home/pipolm.pk/CPool_Day06
** 
** Made by Philippe KAM
** Login   <pipolm.pk@epitech.net>
** 
** Started on  Tue Oct 11 17:54:47 2016 Philippe KAM
** Last update Fri Oct 28 15:35:46 2016 Philippe KAM
*/

int	my_str_isnum(char *str)
{
  int	a;

  a = 0;
  while (str[a] != '\0')
    {
      if (str[a] >= 48 && str[a] <= 57)
	return (1);
      a = a + 1;
    }
  if (str[a] == '\0')
    return (1);
  return (0);
}
