/*
** my_show_wordtab.c for my_show_wordtab.c in /home/pipolm.pk/CPool_Day08/task03
** 
** Made by Philippe KAM
** Login   <pipolm.pk@epitech.net>
** 
** Started on  Fri Oct 14 10:25:47 2016 Philippe KAM
** Last update Thu Jan 19 14:42:15 2017 philippe kam
*/

int	my_show_wordtab(char **tab)
{
  int	a;
  int	b;

  a = 0;
  while (tab[a] != '\0')
    {
      b = 0;
      while (tab[a][b] != '\0')
	{
	  my_putchar(tab[a][b]);
	  b = b + 1;
	}
      my_putchar('\n');
      a = a + 1;
    }
  return(0);
}
