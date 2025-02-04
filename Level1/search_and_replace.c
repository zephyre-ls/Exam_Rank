/*Write a program called search_and_replace that takes 3 arguments, the first
arguments is a string in which to replace a letter (2nd argument) by
another one (3rd argument).
If the number of arguments is not 3, just display a newline.
If the second argument is not contained in the first one (the string)
then the program simply rewrites the string followed by a newline.*/

#include <unistd.h>

void	ft_cherche_remplace(char *str, char cherche, char remplace)
{
	int	i;

	i = 0;

	while(str[i] != '\0')
	{
		if(str[i] == cherche)
			str[i] = remplace;
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 4 && argv[2][1] =='\0' && argv [3][1] == '\0')
		ft_cherche_remplace(argv[1], argv[2][0], argv[3][0]);
	write(1, "\n", 1);
	return(0);
}
