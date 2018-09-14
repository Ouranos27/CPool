/*
** my_str_isalpha.c for my_str_isalpha.c in /home/pipolm.pk/CPool_Day06
** 
** Made by Philippe KAM
** Login   <pipolm.pk@epitech.net>
** 
** Started on  Tue Oct 11 17:41:48 2016 Philippe KAM
** Last update Fri Oct 28 15:34:40 2016 Philippe KAM
*/

int	my_str_isalpha(char *str)
{
  int	a;

  a = 0;
  while (str[a] != '\0')
    {
      a = a + 1;
      if ((str[a] >= 65 && str[a] <= 90) || (str[a] >= 97 && str[a] <= 122))
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
