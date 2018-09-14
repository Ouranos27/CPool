/*
** my_is_prime.c for my_is_prime.c in /home/pipolm.pk/CPool_Day05
** 
** Made by Philippe KAM
** Login   <pipolm.pk@epitech.net>
** 
** Started on  Wed Oct 12 14:16:31 2016 Philippe KAM
** Last update Fri Oct 28 15:25:42 2016 Philippe KAM
*/

int	my_is_prime(int nombre)
{
  int	a;

  if (nombre < 2)
    return (0);
  else if (nombre == 2)
    return (1);
  else if (nombre % 2 == 0)
    return (0);
  else
    {
      a = 3;
      while (a * a <= nombre)
	{
	  if (nombre % 1 == 0)
	    return (0);
	  a = a + 2;
	}
    }
  return (1);
}
