/*
** my_revstr.c for  in /home/BlackBirdz/CPool_Day06
** 
** Made by Laabid Zakaria
** Login   <BlackBirdz@epitech.net>
** 
** Started on  Mon Oct 10 10:53:29 2016 Laabid Zakaria
** Last update Fri Oct 28 09:34:34 2016 Philippe KAM
*/

char	*my_revstr(char *str)
{
  int	i;
  int	len;
  char	c;

  i = 0;
  len = my_strlen(str);
  while (i < (len /2))
    {
      c = str[i];
      str[i] = str[len - 1 - i];
      str[len - 1 - i] = c;
      i = i + 1;
    }
  return (str);
}
