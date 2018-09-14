/*
** my_showstr.c for my_showstr.c in /home/pipolm.pk/CPool_Day06
** 
** Made by Philippe KAM
** Login   <pipolm.pk@epitech.net>
** 
** Started on  Wed Oct 12 11:38:49 2016 Philippe KAM
** Last update Fri Oct 28 15:45:05 2016 Philippe KAM
*/

int	my_showstr(char *str)
{
  int	a;
  int	b;

  a = 0;
  b = my_putnbr_base(str[a], "°123456789abcdef");
  while (str[a] != '\0')
    {
      if (my_str_isprintable(str[a]) != 0)
	my_putchar(str[a]);
      else
	{
	  my_putchar('\\');
	  if (str[a] <= 15)
	    {
	      my_putchar('0');
	    }
	  my_putchar(b);
	}
      a = a + 1;
    }
  return (0);
}
