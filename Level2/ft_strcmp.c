/*
Reproduce the behavior of the function strcmp (man strcmp).
Your function must be declared as follows:
int    ft_strcmp(char *s1, char *s2);*/

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while(s1[i] == s2[i])
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return(0);
		i++;
	}
	return(s1[i]- s2[i]);
}

int main(void)
{
    printf("%d\n", ft_strcmp("abc", "abc"));
    printf("%d\n", ft_strcmp("abc", "abd"));
    printf("%d\n", ft_strcmp("abc", "ab"));
    printf("%d\n", ft_strcmp("abcd", "abce"));
    return 0;
}
