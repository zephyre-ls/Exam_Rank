/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <lduflot@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 09:52:56 by lduflot           #+#    #+#             */
/*   Updated: 2025/02/14 09:55:47 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putnbr(int nb)
{
	char result;

	if (nb > 9)
	{
		putnbr(nbr/10);
		putnbr(nbr%10);
	else
	{
		result = nbr + '0';
		write(1, &nbr, 1);
	}
}

int	main(int argc, char **argv)
{
	putnbr(argc - 1);
	write(1, "\n", 1);
	return(0);
}
