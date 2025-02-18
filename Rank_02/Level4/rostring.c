/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <lduflot@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 10:07:08 by lduflot           #+#    #+#             */
/*   Updated: 2025/02/14 10:20:36 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	**ft_splitcourt(char *str)
{
	int	i = 0;
	int j = 0;
	int dest_i = 0;
	char **dest;

	dest = malloc(sizeof(char *) * 256);
	if (dest == NULL)
		return(NULL);
	while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while(str[i])
	{
		j = 0;
		dest[dest_i] = malloc(sizeof(char) * 4096);
		if (dest[dest_i] == NULL)
			return(NULL);
		while(str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
		{
			dest[dest_i][j] = str[i];
			j++;
			i++;
		}
		dest[dest_i][j] = '\0';
		while(str[i] == ' ' || str[i] == '\t')
			i++;
		dest_i++;
	}
	dest[dest_i] = '\0';
	return(dest);
}

void	ft_putstr(char *str)
{
	int	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	char **dest;
	int i = 0;

	if(argc == 2)
	{
		dest = ft_splitcourt(argv[1]);
		while(dest[i + 1])
		{
			ft_putstr(dest[i+1]);
			write(1, " ", 1);
			i++;
		}
		ft_putstr(dest[0]);
	}
	write(1, "\n", 1);
	return (0);
}
