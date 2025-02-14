/*Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string, and displays this string with exactly one
space between words, with no spaces or tabs either at the beginning or the end,
followed by a \n.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string.

If the number of arguments is not 1, or if there are no words to display, the
program displays \n.*/

#include <unistd.h>

void	epur_str(char *str)
{
	int	i;

	i = 0;
	while(str[i] == ' ' || str[i] == '\t')
		i++;
	while(str[i] != '\0')
	{
		if(str[i] == ' ' || str[i] == '\t')
		{
			if((str[i + 1] != ' ' && str[i + 1] != '\t') && str[i + 1] != '\0')
				write(1, " ", 1);
		}
		else if(str[i] != ' ' & str[i] != '\t')
			write(1, &str[i], 1);
		i++;
	}
}

int	main(int	argc, char **argv)
{
	if(argc == 2)
		epur_str(argv[1]);
	write(1, "\n", 1);
	return(0);

}
