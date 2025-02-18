/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <lduflot@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 13:38:56 by lduflot           #+#    #+#             */
/*   Updated: 2025/02/17 13:57:04 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	epur_str(char *str)
{
	int	i = 0;

	while(str[i] == ' ' || str[i] == '\t')
		i++;
	while(str[i])
	{
		if(str[i] == ' ' || str[i] == '\t')
		{
			if((str[i+1] != ' ' && str[i + 1] != '\t') && str[i+1] != '\0')
				write(1, " ", 1);
		}
		else if (str[i] != ' ' && str[i] != '\t')
			write(1, &str[i], 1);
		i++;
	}
	
}

int	main(int argc, char **argv)
{
	if(argc == 2)
		epur_str(argv[1]);
	write(1, "\n", 1);
	return(0);
}
