/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <lduflot@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 11:29:27 by lduflot           #+#    #+#             */
/*   Updated: 2025/02/11 13:02:46 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_split(char *str)
{
	int		i;
	int		word_idx;
	int		char_idx;
	char	**split;

	i = 0;
	word_idx = 0;
	if (!(split = (char **)malloc(sizeof(char *) * 256)))
		return (NULL);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' )
		i += 1;
	while (str[i] != '\0')
	{
		char_idx = 0;
		if (!(split[word_idx] = (char *)malloc(sizeof(char) * 4000)))
			return (NULL);
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
			split[word_idx][char_idx++] = str[i++];
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i += 1;
		split[word_idx][char_idx] = '\0';
		word_idx +=1;
	}
	split[word_idx] = NULL;
	return (split);
}
