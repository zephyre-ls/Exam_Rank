/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <lduflot@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 16:46:42 by lduflot           #+#    #+#             */
/*   Updated: 2025/02/16 17:00:27 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	cherche_trouve(char *str, char cherche, char modif)
{
	int	i = 0;
	while(str[i])
	{
		if(str[i] == cherche)
			str[i] = modif;
		write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	if(argc == 4 && argv[2][1] == '\0' && argv[3][1] == '\0')
		cherche_trouve(argv[1], argv[2][0], argv[3][0]);
	write(1, "\n", 1);
	return(0);
}
