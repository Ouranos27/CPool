/*
** my_getnbr.c for my_getnbr.c in /home/pipolm.pk/CPool_Day04
** 
** Made by Philippe KAM
** Login   <pipolm.pk@epitech.net>
** 
** Started on  Mon Oct 10 11:21:45 2016 Philippe KAM
** Last update Sat Nov 26 15:05:58 2016 Philippe KAM
*/

#include "include/my.h"
#include <stdio.h>

int	my_getnbr(char *str)
{
  int	i;
  int	var;

  var = 0;
  i = 0;
  if (str[0] == '-' && str[1] != '\0')
    i = i + 1;
  while (str[i] != '\0')
    {
      if (str[i] >= '0' && str[i] <= '9')
	{
	  var = var * 10;
	  var = var + str[i] - '0';
	}
      else
	return (var);
      i = i + 1;
    }
  if (str[0] == '-')
    var = -1 * var;
  return (var);
}
