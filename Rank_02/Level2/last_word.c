/*Write a program that takes a string and displays its last word followed by a \n.
A word is a section of string delimited by spaces/tabs or by the start/end of
the string.
If the number of parameters is not 1, or there are no words, display a newline.
*/

#include <unistd.h> 

char	ft_last_word(char *str)
{
	int	i;
	int start;

	i = 0;
	while(str[i] != '\0')
		i++;
	while (i > 0 && (str[i - 1] == ' ' || str[i - 1] == '\t'))
		i--;
	start = i;
	while(start > 0 && str[start - 1] != ' ' && str[start - 1] != '\t')
		start--;
	while(start < i)
	{
		write(1, &str[start], 1);
		start++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_last_word(argv[1]);
	write(1, "\n", 1);
	return(0);
}
