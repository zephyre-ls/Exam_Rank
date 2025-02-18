/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <lduflot@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 10:59:50 by lduflot           #+#    #+#             */
/*   Updated: 2025/02/11 11:23:15 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

// deux nombre, retourne le plus grand commun diviseur (PGCD). Ex= 42 et 12 = 6 

int	pgcd(int a, int b)
{
	int tmp;

	while(b != 0)
	{
		tmp = b;
		b = a % b;
		a = tmp;
	}
	return(a);
}

int	main(int argc, char **argv)
{
	if(argc==3)
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);
			if(num1 <= 0 || num2 <= 0)
				printf("\n");
		int result = pgcd(num1, num2);
		printf("%d\n", result);
	}
	else
		printf("\n");
	return(0);
}
