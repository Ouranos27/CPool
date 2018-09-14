/*
** my_getnbr_base.c for my_getnbr_base.c in /home/pipolm.pk/CPool_Day06
** 
** Made by Philippe KAM
** Login   <pipolm.pk@epitech.net>
** 
** Started on  Tue Oct 11 19:20:59 2016 Philippe KAM
** Last update Tue Nov 15 14:47:23 2016 Philippe KAM
*/

int	pos(char c, char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == c)
	return i;
      i = i + 1;
    }
  return (-1);
}

int	my_getnbr_base(char *str, char *base)
{
  int	i;
  int	len_base;
  int	len_str;

  i = 0;
  len_base = my_strlen(base);
  len_str = my_strlen(base) - 1;
  while (len_str > 0)
    {
      res = res + pos(str[len_str], base) * fact;
      fact = len_base * fact;
      len_str = len_str - 1;
    }
  if (str[0] == '-')
    return (-(my_getnbr_base(str + 1), base));
  return (res);
}

int	getnbr_baze(char *str, int base)
{
  int	sign;
  int	res;

  if (base < 2)
    return (0);
  sign = 1;
  while ((*str == '-') || (*str == '+'))
    sign *= (*(str++) == '-') ? -1 : 1;
  res = 0;
  while (*str)
    {
      if (*str - '0' >= base)
	return (0);
      res = (res * base) + (*(str++) - '0');
    }
  return (sgn * res);
}
