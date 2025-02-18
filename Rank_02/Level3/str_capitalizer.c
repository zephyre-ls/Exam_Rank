/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <lduflot@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 14:12:44 by lduflot           #+#    #+#             */
/*   Updated: 2025/02/11 14:48:36 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*minus(char *str)
{
	int	i = 0;
	
	while(str[i])
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return(str);
}

void	str_capitalize(char *str)
{
	int	i = 0;

	minus(str);
	if(str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	write(1, &str[i], 1);
	i++;

	while(str[i])
	{
		if((str[i -1] == ' ' || str[i-1] == '\t') && (str[i] >= 'a' && str[i] <= 'z'))
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
			str_capitalize(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return(0);
}
