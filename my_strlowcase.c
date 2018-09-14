/*
** my_strlowcase.c for my_strlowcase.c in /home/pipolm.pk/CPool_Day06
** 
** Made by Philippe KAM
** Login   <pipolm.pk@epitech.net>
** 
** Started on  Tue Oct 11 17:02:15 2016 Philippe KAM
** Last update Fri Oct 28 15:37:46 2016 Philippe KAM
*/

char	*my_srtlowcase(char *str)
{
  int	a;

  a = 0;
  while (str[a] != '\0')
    {
      if (str[a] >= 65 && str[a] <= 90)
	{
	  str[a] = str[a] + 32;
	}
      a = a + 1;
    }
  return (str);
}
