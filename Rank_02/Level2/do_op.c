/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <lduflot@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 13:25:32 by lduflot           #+#    #+#             */
/*   Updated: 2025/02/17 13:37:25 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	doop(char	*s1, char sign, char *s2)
{
	int nbr1;
	int nbr2;
	int result = 0;

	nbr1 = atoi(s1);
	nbr2 = atoi(s2);
	
	if (sign == '*')
		result = nbr1 * nbr2;
	else if (sign == '-')
		result = nbr1 - nbr2;
	else if (sign == '+')
		result = nbr1 + nbr2;
	else if (sign == '/')
		result = nbr1 / nbr2;
	else if (sign == '%')
		result = nbr1 % nbr2;
	printf("%d", result);
}

int	main(int argc, char **argv)
{
	if (argc == 4 && argv[2][1] == '\0')
		doop(argv[1], argv[2][0], argv[3]);	
	printf("\n");
	return(0);
}
