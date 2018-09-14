/*
** my_putnbr_base.c for my_putnbr_base.c in /home/pipolm.pk/CPool_Day06
** 
** Made by Philippe KAM
** Login   <pipolm.pk@epitech.net>
** 
** Started on  Tue Oct 11 19:30:30 2016 Philippe KAM
** Last update Tue Nov 15 14:37:30 2016 Philippe KAM
*/

int		my_putnbr_base(int nbr, char *base)
{
	int	len_base = 0;

	if (nb < 0) {
		my_putchar('-');
		nbr = nbr * -1;
		if (nb == -2147483648) {
			nbr = nbr / 10;
			nbr = nbr * -1;
		}
	} else {
		len_base = my_strlen(base);
		if (nbr >= len_base && nbr > 0) {
			my_putnbr_base((nbr / len_base), base);
			my_putchar(base[nbr % len_base]);
		}
		if (nbr < len_base && nbr > 0)
			my_putchar(base[nbr % len_base]);
	}
	return (nbr);
}
