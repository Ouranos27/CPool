/*
** my_strupcase.c for my_strupcase.c in /home/pipolm.pk/CPool_Day06
** 
** Made by Philippe KAM
** Login   <pipolm.pk@epitech.net>
** 
** Started on  Tue Oct 11 17:01:16 2016 Philippe KAM
** Last update Fri Oct 28 15:40:14 2016 Philippe KAM
*/

char	*my_srtupcase(char *str)
{
  int	a;

  a = 0;
  while (str[a] != '\0')
    {
      if (str[a] >= 97 && str[a] <= 122)
	{
	  str[a] = str[a] - 32;
	}
      a = a + 1;
    }
  return (str);
}
