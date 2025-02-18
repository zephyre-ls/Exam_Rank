/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <lduflot@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 10:22:29 by lduflot           #+#    #+#             */
/*   Updated: 2025/02/16 10:31:40 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i = 0;
	int	j = 0;

	while(s[i])
	{
		j = 0;
		while(reject[j])
		{
			if(s[i] == reject[j])
				return(i);
			j++;
		}
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
int	main(void)
{
	char s[] = "abc";
	char reject[] = "c";
	int result	= ft_strcspn(s, reject);
	printf("%d", result);
	return(0);
}*/
