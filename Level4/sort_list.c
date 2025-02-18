/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <lduflot@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 10:25:12 by lduflot           #+#    #+#             */
/*   Updated: 2025/02/14 10:30:10 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : sort_list
Expected files   : sort_list.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following functions:
t_list	*sort_list(t_list* lst, int (*cmp)(int, int));
This function must sort the list given as a parameter, using the function
pointer cmp to select the order to apply, and returns a pointer to the first element of the sorted list.
Duplications must remain
Inputs will always be consistent.
You must use the type t_list described in the file list.h
that is provided to you. You must include that file
(#include "list.h"), but you must not turn it in. We will use our own to compile your assignment.
Functions passed as cmp will always return a value different from
0 if a and b are in the right order, 0 otherwise. <!--! IMPORTANT -->
For example, the following function used as cmp will sort the list
in ascending order:
int ascending(int a, int b)
{
	return (a <= b);
}*/
type def struct s_list
{
	struct s_lits *next;
	int	data;
} t_list;

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int tmp_swap;
	t_list *start;

	start = lst;

	while(lst && lst->next)
	{
		if((*cmp)(lst->data, lest->next->date) == 0)
		{
			tmp_swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = temp_swap;
			lst = start;
		}
		else
			lst = lst->next;
	}
	return(start);
}


}
