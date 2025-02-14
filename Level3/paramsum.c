/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <lduflot@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 09:52:56 by lduflot           #+#    #+#             */
/*   Updated: 2025/02/14 12:09:24 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putnbr(int nb)
{
	char result;

	if (nb > 9)
	{
		putnbr(nb / 10);
		putnbr(nb % 10);
	}
	else
	{
		result = nb + '0';
		write(1, &result, 1);
	}
}

int	main(int argc, char **argv)
{
	(void)argv;
	putnbr(argc - 1);
	write(1, "\n", 1);
	return(0);
}
