/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <lduflot@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 12:07:24 by lduflot           #+#    #+#             */
/*   Updated: 2025/02/18 12:10:16 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Write a function that takes a list and a function pointer, and applies this
function to each element of the list.
It must be declared as follows:
void    ft_list_foreach(t_list *begin_list, void (*f)(void *));
The function pointed to by f will be used as follows:
(*f)(list_ptr->data);*/

//ft_list.h
typdedef struct s_list
{
	struct s_list *next;
	void	*data;
}	t_list;

//ft_list_foreach.c
#include "../ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while(begin_list)
	{
		(*f)(begin_list->date);
		begin_list = begin_list->next;
	}
}
