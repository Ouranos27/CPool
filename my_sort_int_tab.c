/*
** my_sort_int_tab.c for my_sort_int_tab.c in /home/pipolm.pk/CPool_Day04
** 
** Made by Philippe KAM
** Login   <pipolm.pk@epitech.net>
** 
** Started on  Wed Oct 12 13:53:15 2016 Philippe KAM
** Last update Fri Oct 28 15:31:11 2016 Philippe KAM
*/

void	my_sort_int_tab(int *tab, int size)
{
  int	a;

  a = 0;
  while (a < size)
    {
      if (tab[a] < tab[a + 1])
	{
	  my_swap(&tab[a], &tab[a + 1]);
	}
      a = a + 1;
    }
}
