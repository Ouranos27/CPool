/*
** my_isneg.c for my_isneg.c in /home/pipolm.pk/CPool_Day03
** 
** Made by Philippe KAM
** Login   <pipolm.pk@epitech.net>
** 
** Started on  Thu Oct  6 10:06:42 2016 Philippe KAM
** Last update Fri Oct 28 15:22:16 2016 Philippe KAM
*/

int	my_isneg(int n)
{
  if (n >= 0)
     {
	my_putchar('P');
     }
  else if ( n < 0 )
     {
        my_putchar('N');
     }
  return (0);
}
