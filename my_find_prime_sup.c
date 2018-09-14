/*
** my_find_prime_sup.c for my_find_prime_sup.c in /home/pipolm.pk/CPool_Day05
** 
** Made by Philippe KAM
** Login   <pipolm.pk@epitech.net>
** 
** Started on  Wed Oct 12 16:31:40 2016 Philippe KAM
** Last update Fri Oct 28 15:44:07 2016 Philippe KAM
*/

int	my_find_prime_sup(int nb)
{
  while (my_is_prime(nb) == 0)
    {
      nb = nb + 1;
    }
  return (nb);
}
