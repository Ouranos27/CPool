/*
** my_strncat.c for my_strncat.c in /home/pipolm.pk/CPool_Day06
** 
** Made by Philippe KAM
** Login   <pipolm.pk@epitech.net>
** 
** Started on  Wed Oct 12 15:47:34 2016 Philippe KAM
** Last update Sun Jan 29 21:29:45 2017 philippe kam
*/

char	*my_strncat(char *dest, char *src, int nb)
{
  int	i;

  i = 0;
  while (i <= nb)
    {
      dest[i] = src[i];
      i = i + 1;
    }
  return (dest);
}
