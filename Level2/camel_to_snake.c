/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <lduflot@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 10:10:37 by lduflot           #+#    #+#             */
/*   Updated: 2025/02/18 10:23:09 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	camel(char *str)
{
	int i = 0;

	while(str[i])
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			write(1, "_" ,1);
			str[i] += 32;
			write(1, &str[i], 1);
		}
		/*else if(str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
			write(1, &str[i], 1);
		}*/
		else
			write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if(argc == 2)
		camel(argv[1]);
	write(1, "\n", 1);
	return(0);
}
