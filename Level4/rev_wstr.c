/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <lduflot@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 10:30:35 by lduflot           #+#    #+#             */
/*   Updated: 2025/02/14 10:38:50 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : rev_wstr
Expected files   : rev_wstr.c
Allowed functions: write, malloc, free
 
Write a program that takes a string as a parameter, and prints its words in
reverse order.
A "word" is a part of the string bounded by spaces and/or tabs, or the
begin/end of the string.
If the number of parameters is different from 1, the program will display
'\n'.
In the parameters that are going to be tested, there won't be any "additional"
spaces (meaning that there won't be additionnal spaces at the beginning or at
the end of the string, and words will always be separated by exactly one space).
Examples:
$> ./rev_wstr "You hate people! But I love gatherings. Isn't it ironic?" | cat -e
ironic? it Isn't gatherings. love I But people! hate You$
$>./rev_wstr "abcdefghijklm"
abcdefghijklm
$> ./rev_wstr "Wingardium Leviosa" | cat -e
Leviosa Wingardium$
$> ./rev_wstr | cat -e
$
$>*/

#include <unistd.h>
#include <stdlib.h>

char	**splitcourt(char *str)
{
	int	i=0;
	int	j=0;
	int	dest_i=0;
	char **dest;

	dest = malloc(sizeof(char *) * 256);
	if(dest == NULL)
		return(NULL);
	while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while(str[i])
	{
		j = 0;
		dest[dest_i] = mallo(sizeof(char) * 4096);
		if(dest[dest_i] == NULL)
			return(NULL);
		while(str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			dest[dest_i][j]=str[i];
			i++;
			j++;
		}
		while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		dest_i++;
		}
		dest[dest_i] = NULL;
		return(dest);
}

void	ft_putstr(char *str)
{
	int i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		char **dest = splitcourt(argc[1]);
		int i = 0;
		int	count = 0;
		
		while(dest[count])
			count++;
		while(dest[count] > 0)
		{
			ft_putstr(dest[count -1]);
			if (count != 1)
				write(1, " " ,1);
			count--;
		}
	}
	write(1, "\n", 1);
	return (0);
