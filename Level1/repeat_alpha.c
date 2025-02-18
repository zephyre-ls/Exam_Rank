/*Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.
'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...
Case remains unchanged.
If the number of arguments is not 1, just display a newline.*/

#include <unistd.h>

void	ft_repeat_alpha(char *str)
{
	int	i;
	int	repeat; //nbr de fois que chaque caractere doit etre affichés

	i = 0;
	while(str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			repeat = str[i] - 'a' + 1; //calcul de son rang dans l'alphabet
		else if (str[i] >= 'A' && str[i] <= 'Z')
			repeat = str[i] - 'A' + 1;
		else
			repeat = 1;
		while (repeat > 0)
		{
			write(1, &str[i], 1);
			repeat--;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_repeat_alpha(argv[1]);
	write(1, "\n", 1);
	return(0);
}
