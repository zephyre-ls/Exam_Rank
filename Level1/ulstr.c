/*
Write a program that takes a string and reverses the case of all its letters.
Other characters remain unchanged.
You must display the result followed by a '\n'.
If the number of arguments is not 1, the program displays '\n'.*/

#include <unistd.h>

void	ft_ulstr(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;	
			write(1, &str[i], 1);
		}
		else if(str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
			write(1, &str[i], 1);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	
	i = 1;
	if (argc < 2)
		write(1, "\n", 1);
	else
	{
		while(i < argc)
		{
			ft_ulstr(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	return(0);
}


