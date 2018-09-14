/*
** my_strdup.c for my_strdup.c in /home/pipolm.pk/CPool_Day08
** 
** Made by Philippe KAM
** Login   <pipolm.pk@epitech.net>
** 
** Started on  Thu Oct 13 09:50:53 2016 Philippe KAM
** Last update Sun Dec  4 20:15:03 2016 Philippe KAM
*/

#include "include/my_ls.h"

char	*my_strdup(char *src)
{
  char	*b;
  int	c;

  c = my_strlen(src) + 1;
  b = malloc(sizeof(char) * c);
  if (c == 0)
    {
      return (0);
    }
  my_strcpy(b, src);
  b[c - 1] = '\0';
  return (b);
}
