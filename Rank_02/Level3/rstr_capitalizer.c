/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <lduflot@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 15:06:05 by lduflot           #+#    #+#             */
/*   Updated: 2025/02/11 15:36:42 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	minus(char *str)
{
	int	i = 0;
	while(str[i])
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
}

void	rstr(char *str)
{
	int	i = 0;
	
	minus(str);
/*	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -=32;
	write(1, &str[i], 1);
	i++; */
	
	while(str[i])
	{
		if((str[i + 1] == ' ' || str[i + 1] == '\t' || str[i+1] == '\0') && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		write(1, &str[i], 1);
		i++;
	}
}


int	main(int argc, char **argv)
{
	int	i = 1;
	if(argc > 1)
	{
		while(i < argc)
		{
			rstr(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	else
	{
		write(1, "\n", 1);
		return(0);
	}
}
