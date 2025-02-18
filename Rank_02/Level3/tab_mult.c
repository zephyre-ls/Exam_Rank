/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <lduflot@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 17:33:28 by lduflot           #+#    #+#             */
/*   Updated: 2025/02/10 18:07:57 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	putnbr(int nbr)
{
	char	*str;

	if(nbr >= 0 && nbr <= 9)
		ft_putchar(nbr + '0');
	if(nbr > 9)
	{
		putnbr(nbr / 10);
		putnbr(nbr % 10);
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	atoi(char *str)
{
	int i;
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

int	main(int argc, char **argv)
{
	int	i;
	int	nbr;
	
	i = 1;
	if(argc == 2)
	{
		nbr = atoi(argv[1]);
		while(i <= 9)
		{
			putnbr(i);
			ft_putstr(" x ");
			putnbr(nbr);
			ft_putstr(" = ");
			putnbr(nbr * i);
			if(i < 9)
				write(1, "\n", 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
