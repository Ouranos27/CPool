/*
** my_showmem.c for my_showmem.c in /home/pipolm.pk/CPool_Day06
** 
** Made by Philippe KAM
** Login   <pipolm.pk@epitech.net>
** 
** Started on  Wed Oct 12 12:11:20 2016 Philippe KAM
** Last update Fri Oct 28 15:44:25 2016 Philippe KAM
*/

int	my_showmem(char *str, int size)
{
  int	a;

  a = 0;
  while (a < size)
    {
      if (a % 15 == 0)
	{
	  my_putchar('\n');
	  my_putnbr_base(str[a], "0123456789abcdef");
	  my_putchar(':');
	}
      if (a % 2 == 0)
	{
	  my_putchar(' ');
	  my_put_nbr_base(str[a], "0123456789abcdef");
	  a = a + 1;
	}
    }
  return (0);
}
