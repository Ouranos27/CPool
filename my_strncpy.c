/*
** my_strncpy.c for my_strpncpy.c in /home/pipolm.pk/CPool_Day06
** 
** Made by Philippe KAM
** Login   <pipolm.pk@epitech.net>
** 
** Started on  Mon Oct 10 19:18:39 2016 Philippe KAM
** Last update Fri Oct 28 15:39:18 2016 Philippe KAM
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;

  i = 0;
  while (src[i] != '\0' && i < n)
    {
      dest[i] = src[i];
      i = i + 1;
    }
  if (i == n)
    dest[i] = '\0';
  return (dest);
}
