/*
Write a function that returns the number of elements in the linked list that's
passed to it.

It must be declared as follows:

int	ft_list_size(t_list *begin_list);

You must use the following structure, and turn it in as a file called
ft_list.h:
*/

/*FICHIER ft_list.h:
////////////////////////////
#ifndef FT_LIST_H
# define FT_LIST_H

# include <stddef.h>

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

#endif
////////////////////////////
*/
#include "ft_list.h"

int	ft_lstsize(t_list *begin_list)
{
	int	len;

	len = 0;
	if(begin_list == NULL)
		return(len);
	while(begin_list != NULL)
	{
		begin_list = begin_list->next;
		len++;
	}
	return(len);
}
