/*
** my_strcat.c for my_strcat.c in /home/pipolm.pk/CPool_Day06
** 
** Made by Philippe KAM
** Login   <pipolm.pk@epitech.net>
** 
** Started on  Wed Oct 12 15:20:20 2016 Philippe KAM
** Last update Sun Jan 29 21:31:22 2017 philippe kam
*/

char	*my_strcat(char *dest, char *src)
{
  int	i;
  int	j;

  i = 0;
  j = my_strlen(dest);
  while (src[i] != '\0')
    {
      dest[j + i] = src[i];
      i = i + 1;
    }
  dest[j + i] = '\0';
  return (dest);
}
