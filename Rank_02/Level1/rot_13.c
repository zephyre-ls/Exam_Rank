/*Write a program that takes a string and displays it, replacing each of its
letters by the letter 13 spaces ahead in alphabetical order.
'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.
The output will be followed by a newline.
If the number of arguments is not 1, the program displays a newline.*/

#include <unistd.h>

void	ft_rot_13(char *str)
{
	int	i;

	i = 0;

	while(str[i] != '\0')
	{
		if(str[i] >= 'a' && str[i] <= 'm'|| (str[i] >= 'A' && str[i] <= 'M')
			str[i] += 13;
		else if(str[i] >= 'n' && str[i] <= 'z'|| (str[i] >= 'N' && str[i] <= 'Z')
			str[i] -= 13;
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_rot_13(argv[1]);
	write(1, "\n", 1);
	return (0);
}
