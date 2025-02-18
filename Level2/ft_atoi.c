/*
Write a function that converts the string argument str to an integer (type int)
and returns it.
It works much like the standard atoi(const char *str) function, see the man.
Your function must be declared as follows:
int	ft_atoi(const char *str);*/

#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	nbr;
	int	sign;

	i = 0;
	nbr = 0;
	sign = 1;
	while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -sign;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while(str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		nbr = nbr * 10 + (str[i] - '0');
		i++;
	}
	return(nbr * sign);
}

int main(int argc, char **argv)
{
  const char *str = argv[1];
  printf("%s\n%d\n", str, ft_atoi(str));
	return 0;
}
