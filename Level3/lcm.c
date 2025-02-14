/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <lduflot@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 09:48:00 by lduflot           #+#    #+#             */
/*   Updated: 2025/02/14 09:51:49 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int n;

	if(a == 0 || b == 0)
		return(0);
	if (a > b)
		n = a;
	else
		n = b;
	while(1)
	{
		if(n % a == 0 && n %b == 0)
			return(n);
		n++;
	}
}
