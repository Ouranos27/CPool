/*
** my_strstr.c for my_strstr.c in /home/pipolm.pk/CPool_Day06
**
** Made by Philippe KAM
** Login   <pipolm.pk@epitech.net>
**
** Started on  Tue Oct 11 10:06:07 2016 Philippe KAM
** Last update Fri Nov 18 18:26:17 2016 Philippe KAM
*/

char	*my_strstr(char *str, char *to_find)
{
  int	a;
  int	b;

  a = 0;
  b = 0;
  while (str[a] != '\0')
    {
      a = a + 1;
      while (str[a] == to_find[b])
	{
	  a = a + 1;
	  b = b + 1;
	}
      if (to_find[b] == '\0')
	return (str + a - b);
      else
	return (0);
    }
  return (0);
}
