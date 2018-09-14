/*
** my_square_root.c for my_square_root.c in /home/pipolm.pk/CPool_Day05
** 
** Made by Philippe KAM
** Login   <pipolm.pk@epitech.net>
** 
** Started on  Wed Oct 12 14:07:22 2016 Philippe KAM
** Last update Fri Oct 28 15:32:11 2016 Philippe KAM
*/

int	my_square_root(int nb)
{
  int	a;

  a = 0;
  if (nb < 0)
    {
      my_putstr("WARNING: nb must be unsigned\n");
      return (0);
    }
  else
    {
      while ( a < nb)
	{
	  if (my_power_rec(a, 2) == nb)
	    return (a);
	  a = a + 1;
	}
    }
  return (0);
}
