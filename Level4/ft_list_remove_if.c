/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <lduflot@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 11:12:50 by lduflot           #+#    #+#             */
/*   Updated: 2025/02/14 11:17:43 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef	struct	s_list
{
	struct s_list *next;
	void *data;
} t_list;

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(void *, void*))
{
	if (*begin_list == NULL || begin_list == NULL)
		return;

	t_list *current_node = *begin_list;
	int test;

	if(cmp(current_node->data, data_ref) == 0)
	{
		*begin_list = current_node->next;
		free(current_node);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	else
		ft_list_remove_if(&current_node->next, data_ref, cmp);
}
