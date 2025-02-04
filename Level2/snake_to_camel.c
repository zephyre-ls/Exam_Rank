/* Allowed functions: malloc, free, realloc, write
Write a program that takes a single string in snake_case format
and converts it into a string in lowerCamelCase format.
A snake_case string is a string where each word is in lower case, separated by
an underscore "_".
A lowerCamelCase string is a string where each word begins with a capital letter
except for the first one.
*/

#include <unistd.h>
#include <stdlib.h>

void	ft_camel_to_snake(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] == '_')
		{
			i++; //incrémentations pour sauter les '_' pour ne pas les réécrire
			str[i] = str[i] - ('a' - 'A'); //convertit min en maj 
		}
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int	argc, char **argv)
{
	if (argc == 2)
		ft_camel_to_snake(argv[1]);
	write(1, "\n", 1);
	return (0);
}
