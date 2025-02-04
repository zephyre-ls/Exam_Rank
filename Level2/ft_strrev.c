/*Write a function that reverses (in-place) a string.
It must return its parameter.
Your function must be declared as follows:
char    *ft_strrev(char *str);*/


char	*ft_strrev(char *str)
{
	char	*start;
	char	*end;
	char tmp;

	start = str;
	end = str;
	while(*end != '\0') //trouve la fin de chaine
		end++;
	end--; // se places sur le dernier caractere 

	while(start < end) // permutation enclenchée 
	{
		tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	}
	return(str);
}

#include <stdio.h>

int	main(void)
{
	char str[] = "cette phrase va s'inverser!";
	printf("%s\n", ft_strrev(str));
	return(0);
}
