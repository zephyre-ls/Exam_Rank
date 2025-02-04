/*
Allowed ft = Malloc
Reproduce the behavior of the function strdup (man strdup).
Your function must be declared as follows:
char    *ft_strdup(char *src);*/

#include <stdio.h>
#include <stdlib.h>

size_t ft_strlen(const char *str)
{
  size_t len = 0;
   while (str[len] != '\0')
       len++;
   return len;
}

char	*ft_strdup(char *src)
{
	char *dest;
	int	i;

	i = 0;
	dest = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (dest == NULL)
		return NULL;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}
