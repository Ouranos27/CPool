/*
** my_strncmp.c for my_strncmp.c in /home/pipolm.pk/CPool_Day06
** 
** Made by Philippe KAM
** Login   <pipolm.pk@epitech.net>
** 
** Started on  Tue Oct 11 15:01:19 2016 Philippe KAM
** Last update Fri Oct 28 15:38:52 2016 Philippe KAM
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int	a;

  a = 0;
  while (s1[a] == s2[a] && s1[a] != '\0' && s2[a] != '\0' && a < n)
    a = a + 1;
if (a == n || (s1[a] != '\0' && s2[a] != '\0'))
  return (0);
 else if (s1[a] > s2[a])
   return (1);
 else
   return (-1);
}
