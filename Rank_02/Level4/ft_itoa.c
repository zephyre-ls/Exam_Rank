/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <lduflot@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 15:39:07 by lduflot           #+#    #+#             */
/*   Updated: 2025/02/11 15:52:57 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	len(int nbr)
{
	int size = 0;

	if(nbr <= 0)
		size++;
	while(nbr)
	{
		size++;
		nbr = nbr/10;
	}
	return(size);
}

char	*ft_itoa(int nbr)
{
	char	*dest;
	long	n;
	int size;

	n = nbr;
	size = len(n);
	dest = malloc(sizeof(char) * (size + 1));
	if(!dest)
		return(NULL);
	dest[size] = '\0';
	if (n == 0)
		dest[0] = '0';
	if (n < 0)
	{
		dest[0] = '-';
		n = -n;
	}
	while(n > 0)
	{
		dest[size -1] = (n%10) + '0';
		n = n/10;
		size--;
	}
	return(dest);
}
