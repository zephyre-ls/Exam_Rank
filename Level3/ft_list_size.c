/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <lduflot@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 16:21:07 by lduflot           #+#    #+#             */
/*   Updated: 2025/02/11 16:28:28 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

typedef	struct s_list
{
	struct s_list *next;
	void	*data;
}	t_list;

int	ft_list_size(t_list *begin_list)
{
	int	len = 0;

	if(begin_list == NULL)
		return(len);
	while(begin_list != NULL)
	{
		begin_list = begin_list->next;
		len++;
	}
	return(len);
}
