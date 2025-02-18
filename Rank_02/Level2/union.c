/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <lduflot@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:00:51 by lduflot           #+#    #+#             */
/*   Updated: 2025/02/18 15:08:22 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Allowed functions: write
Write a program that takes two strings and displays, without doubles, the
characters that appear in either one of the strings.
The display will be in the order characters appear in the command line, and
will be followed by a \n.
If the number of arguments is not 2, the program displays \n.*/

#include <unistd.h>

void	ft_union(char *s1, char *s2)
{
	int i = 0;
	while(s1[i])
	{
		if(ft_db1(s1, s1[i], i) == 0)
			write(1, &s1[i], 1);
		i++,
	}
	i = 0;
	while(s2[i])
	{
		if(ft_db2(s1, s2[i]) == 0)
		{
			if(ft_db1(s2, s2[i], i) == 0)
				write(1, &s2[i], 1);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return(0);
}
