/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <lduflot@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 11:09:27 by lduflot           #+#    #+#             */
/*   Updated: 2025/02/18 11:42:53 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	**ft_split(char *str)
{
	int	i = 0;
	int	j = 0;
	int dest_i = 0;
	char **dest;

	dest = malloc(sizeof(char *) * 256);
	if (dest == NULL)
		return(NULL);
	while(str[i])
	{
		j = 0;
		dest[dest_i] = malloc(sizeof(char) * 4096);
		if (dest[dest_i] == NULL)
			return(NULL);
		while(str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			dest[dest_i][j] = str[i];
			i++;
			j++;
		}
		while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		dest_i++;
	}
	dest[dest_i] = NULL;
	return(dest);
}

void	ft_putstr(char *str)
{
	int 	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
int	main(int argc, char **argv)
{
	if(argc == 2)
	{
		char **words =	ft_split(argv[1]);
		int i = 0;
		while(words[i])
			i++;
		i--;
		if (i >= 0)
		{
			ft_putstr(words[i]);
			i--;
		}
		while(i >= 0)
		{
			write(1, " ", 1);
			ft_putstr(words[i]);
			i--;
		}
	}
	write(1, "\n", 1);
	return(0);
}			
