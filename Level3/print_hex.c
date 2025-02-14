/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <lduflot@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 09:50:51 by lduflot           #+#    #+#             */
/*   Updated: 2025/02/11 10:16:57 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	atoi(char *str)
{
	int nb = 0;
	int i = 0;

	while(str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return(nb);
}

char	print_letter(int nbr)
{
	char str;

	if(nbr == 10)
		write(1, "a", 1);
	else if(nbr == 11)
		write(1, "b", 1);
	else if(nbr == 12)
		write(1, "c", 1);
	else if(nbr == 13)
		write(1, "d", 1);
	else if(nbr == 14)
		write(1, "e", 1);
	else if(nbr == 15)
		write(1, "f", 1);
	else
	{
		str = nbr + '0';
		write(1, &str, 1);
	}
}

void	print_hex(int nbr)
{
	if(nbr >= 16)
		print_hex(nbr / 16);
	print_letter(nbr % 16);
}

int	main(int argc, char **argv)
{
	if(argc == 2)
		print_hex(atoi(argv[1]));
	write(1, "\n", 1);
	return (0);
}
