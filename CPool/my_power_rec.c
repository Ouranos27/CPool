/*
** my_power_rec.c for my_power_rec.c in /home/pipolm.pk/CPool_Day05
** 
** Made by Philippe KAM
** Login   <pipolm.pk@epitech.net>
** 
** Started on  Wed Oct 12 13:58:16 2016 Philippe KAM
** Last update Fri Oct 28 15:25:26 2016 Philippe KAM
*/

int	my_power_rec(int nb, int p)
{
  int	res;

  if (power == 0)
    return (1);
  else if (p < 0)
    return (0);
  else if (p > 1)
    {
      res = my_power_rec(nb, p - 1) * nb;
      if (res < 0)
	return (0);
      else
	return (res);
    }
  else
    return (nb);
}
