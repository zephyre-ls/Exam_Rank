/*Write a program that takes a string, and displays the string in reverse
followed by a newline.
If the number of parameters is not 1, the program displays a newline.*/

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while(str[len] != '\0')
		len++;
	return(len);
}
void	ft_revprint(char *str)
{
	int	i;

	i = ft_strlen(str);
	while(i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_revprint(argv[1]);
	write(1, "\n", 1);
	return(0);
}
