/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <lduflot@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 09:29:25 by lduflot           #+#    #+#             */
/*   Updated: 2025/02/14 09:31:28 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	int	i = 0;
	int	reverse=0;

	while (i < 8)
	{
		reverse = (reverse << 1) | (octet & 1);
		octet >>= 1;
		i++;
	}
	return(reverse);
}
