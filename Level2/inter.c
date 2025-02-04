/*Write a program that takes two strings and displays, without doubles, the
characters that appear in both strings, in the order they appear in the first
one.
The display will be followed by a \n.
If the number of arguments is not 2, the program displays \n.
*/

#include <unistd.h>

void	ft_inter(char *src, char *compar)
{
	int	i;
	int	j;
	int	k;
	char tmp_ascii[127];

	i = 0;
	k = 0;
	while(src[i] != '\0')
	{
		j = 0;
		while(compar[j] != '\0')
		{
			if(compar[j] == src[i])
				tmp[i] = src[i];
			write(1, &tmp[i], 1);
		}
		j++;
	}
	i++;
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return(0);
}
