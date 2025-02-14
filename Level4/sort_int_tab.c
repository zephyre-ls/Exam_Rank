/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <lduflot@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 10:21:57 by lduflot           #+#    #+#             */
/*   Updated: 2025/02/14 10:24:19 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Assignment name  : sort_int_tab
Expected files   : sort_int_tab.c
Allowed functions:
Write the following function:
void sort_int_tab(int *tab, unsigned int size);
It must sort (in-place) the 'tab' int array, that contains exactly 'size'
members, in ascending order.
Doubles must be preserved.
Input is always coherent.
*/

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i = 0;
	int tmp;
	
	while(i < (size - 1))
	{
		if(tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i+1];
			tab[i+1] = tmp;
			i=0;
		}
		else
			i++;
	}
}
