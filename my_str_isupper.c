/*
** my_str_isupper.c for my_str_isupper.c in /home/pipolm.pk/CPool_Day06
** 
** Made by Philippe KAM
** Login   <pipolm.pk@epitech.net>
** 
** Started on  Tue Oct 11 18:30:07 2016 Philippe KAM
** Last update Fri Oct 28 15:52:47 2016 Philippe KAM
*/

int	my_str_isupper(char *str)
{
  int	a;

  a = 0;
  while (str[a] != '\0')
    {
      a = a + 1;
      if (str[a] >= 65 && str[a] <= 90)
	return (1);
      else
	return (0);
    }
  if (str[a] == '\0')
    {
      return (1);
    }
  return (0);
}
