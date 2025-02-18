/*Allowed functions: write, exit
--------------------------------------------------------------------------------
Write a program that takes a positive integer as argument and displays the sum
of all prime numbers inferior or equal to it followed by a newline.
If the number of arguments is not 1, or the argument is not a positive number,
just display 0 followed by a newline.
Nombre premier = nombre entier naturel, s'il admet exactement 2 diviseurs : 1 et lui même. */

#include <unistd.h>

void	putnbr(int nbr)
{
	char str;

	if(nbr >= 0 && nbr <= 9)
		nbr = nbr + '0';
	if (nbr > 9)
	{
		putnbr(nbr / 10);
		putnbr(nbr % 10);
	}
	else
		write(1, &str, 1);
}

int	atoi(char *str)
{
	int	i;
	int nbr;

	i = 0;
	nbr = 0;
	while(str[i] != '\0')
	{
		nbr = nbr * 10;
		nbr = nbr + (str[i] - '0');
		i++;
	}
	return(nbr);
}

int	nbr_is_prime(int nbr)
{
	int	i;

	i = 2;
	if (nbr <= 1)
		return(0);
	while(i < nbr)
	{
		if((nbr % i) == 0)
			return(0);
		i++;
	}
	return (1);
}

int	add_prime_sum(int nb)
{
	int	i;
	int	j;

	i = 2;
	j = 0;
	if(nb <= 0)
		return(0);
	while (i <= nb)
	{
		if(nbr_is_prime(i))
			j = j + i;
		i++;
	}
	return(j);
}

int	main(int argc, char **argv)
{
	if(argc == 2)
		putnbr(add_prime_sum(atoi(argv[1])));
	write(1, "\n", 1);
	return(0);
}
