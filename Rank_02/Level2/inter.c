/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <lduflot@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:18:59 by lduflot           #+#    #+#             */
/*   Updated: 2025/02/18 14:41:55 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_affiche(char *str, char c, int position)
{
	int	i = 0;
	while(i < position)
	{
		if(str[i] == c)
			return(1);
		i++;
	}
	return(0);
}

void	ft_inter(char *src, char *s2)
{
	int i = 0;
	int j = 0;
	while(src[i])
	{
		j = 0;
		while(s2[j])
		{
			if(src[i] == s2[j] && ft_is_affiche(src, s2[j], i) == 0)
			{
				write(1, &src[i], 1);
				break;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if(argc == 3)
		ft_inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return(0);
}
