/*Write a program that takes a string and displays it, replacing each of its
letters by the next one in alphabetical order.
'z' becomes 'a' and 'Z' becomes 'A'. Case remains unaffected.
The output will be followed by a \n.
If the number of arguments is not 1, the program displays \n.*/

#include <unistd.h>

void	ft_rotone(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] >= 'a' && str[i] < 'z')
			str[i] += 1;
		if(str[i] >= 'A' && str[i] < 'Z')
			str[i] += 1;
		else if (str[i] == 'Z')
				str[i] = 'A';
		else if(str[i] == 'z')
			str[i] = 'a';
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_rotone(argv[1]);
	write(1, "\n", 1);
	return (0);
}
