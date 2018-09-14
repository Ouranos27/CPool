/*
** my_strcapitalize.c for my_strcapitalize.c in /home/pipolm.pk/CPool_Day06
** 
** Made by Philippe KAM
** Login   <pipolm.pk@epitech.net>
** 
** Started on  Tue Oct 11 17:06:32 2016 Philippe KAM
** Last update Fri Feb  3 18:23:28 2017 philippe kam
*/

char	*my_strcapitalize(char *str)
{
  int	i;

  i = 0;
  if (str[0] >= 97 && str[0] <= 122)
      str[0] = str[0] - 32;
  while (str[i] != '\0')
    {
      if (str[i] >= 65 && str[i] <= 90)
	{
	  if (str[i - 1] != ' ')
	    str[i] = str[i] + 32;
	}
      if (str[i] >= 97 && str[i] <= 122)
	{
	  if (str[i - 1] != ' ')
	    str[i] = str[i] - 32;
	}
      i = i + 1;
    }
  return (str);
}
