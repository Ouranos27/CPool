/*
** my_strlen.c for my_strlen.c in /home/pipolm.pk/CPool_Day04
** 
** Made by Philippe KAM
** Login   <pipolm.pk@epitech.net>
** 
** Started on  Fri Oct  7 10:09:10 2016 Philippe KAM
** Last update Fri Oct 28 15:50:23 2016 Philippe KAM
*/

int	my_strlen(char *str)
{
  int	a;

  a = 0;
  while (str[a] != '\0')
    {
      a = a + 1;
    }
  return (a);
}

int main()
{
	char *str = "azerty";

	printf("%d\n", my_strlen(str));
	return 0;
}
