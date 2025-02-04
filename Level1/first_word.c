/* Write a program that takes a string and displays its first word, followed by a
newline.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline. */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_first_word(char *str)
{
	int i;

	i = 0;
	while(str[i] == ' ' || str[i] == '\t')
		i++;
	while ((str[i] != ' ' && str[i] != '\t') && str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_first_word(argv[1]);
	ft_putchar('\n');
	return (0);
}

