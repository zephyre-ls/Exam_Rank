/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <lduflot@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 12:28:29 by lduflot           #+#    #+#             */
/*   Updated: 2025/02/16 12:42:16 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	prime(int n)
{
	int i = 2;
	if (n == 1)
	{
		printf("1");
		return;
	}
	int first = 1; // n'affiche pas "*" au debut
	while(i * i <= n)
	{
		while(n % i == 0)
		{
			if(first == 0)
				printf("*");
			printf("%d", i);
			n = n / i;
			first = 0;
		}
		i++;
	}
	if (n>1)
	{
		if (first == 0)
			printf("*");
		printf("%d", n);
	}
}
	
int	main(int argc, char **argv)
{
	if(argc == 2)
	{
		int n=(atoi(argv[1]));
		if(n > 0)
			prime(n);
	}
	printf("\n");
	return(0);
}
