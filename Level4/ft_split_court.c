/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_court.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <lduflot@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 11:29:27 by lduflot           #+#    #+#             */
/*   Updated: 2025/02/14 10:05:04 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	**ft_split(char *str)
{
	int		i = 0;
	int		j = 0;
	int		dest_i = 0;
	char	**dest;

	dest = malloc(sizeof(char  *) * 256);
	if (dest == NULL)
		return(NULL);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' )
		i++;
	while (str[i] != '\0')
	{
		j = 0;
		dest[dest_i] = malloc(sizeof(char) * 4000);
		if (dest[dest_i] == NULL)
			return (NULL);
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
		{
			dest[dest_i][j] = str[i];
			j++;
			i++;
		}
		dest[dest_i][j] = '\0';
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		dest_i++;
	}
	dest[dest_i] = NULL;
	return (dest);
}

int	main(void)
{
	char src[] = "Ceci est   un essaie";
	char **dest = ft_split(src);
	int i = 0;

	while(dest[i])
	{
		printf("%s\n", dest[i]);
		i++;
	}
	return(0);
}
