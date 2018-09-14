/*
** my_strcmp.c for my_strcmp.c in /home/pipolm.pk/CPool_Day06
** 
** Made by Philippe KAM
** Login   <pipolm.pk@epitech.net>
** 
** Started on  Tue Oct 11 13:44:20 2016 Philippe KAM
** Last update Fri Oct 28 15:46:05 2016 Philippe KAM
*/

int	my_strcmp(char *s1, char *s2)
{
  int	a;

  a = 0;
  while (s1[a] == s2[a] && s1[a] != '\0' && s2[a] != '\0')
    {
      a = a + 1;
    }
  return (s1[a] - s2[a]);
}
