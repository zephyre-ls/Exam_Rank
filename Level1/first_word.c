/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <lduflot@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 13:07:59 by lduflot           #+#    #+#             */
/*   Updated: 2025/02/11 13:27:19 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


int	main(int argc, char **argv)
{
	if(argc != 2)
		write(1, "\n", 1);
	else
	{
		int	i = 0;
		while(argv[1][i] == ' ')
			i++;
		while(argv[1][i]!= ' ' && argv[1][i] != '\t' && argv[1][i] != '\0')
		{
			write(1, &argv[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return(0);
}
