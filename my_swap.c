/*
** my_swap.c for my_swap.c in /home/pipolm.pk/CPool_Day04
** 
** Made by Philippe KAM
** Login   <pipolm.pk@epitech.net>
** 
** Started on  Thu Oct  6 11:50:49 2016 Philippe KAM
** Last update Fri Oct 28 15:40:36 2016 Philippe KAM
*/

int	my_swap(int *a, int *b)
{
  int c;

  c = *a;
  *a = *b;
  *b = c;
  return (0);
}
