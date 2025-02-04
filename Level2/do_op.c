/*
Allowed functions = atoi, printf, write (du beurrrrrrrre salé à tartiné avec tout ça ez)
Write a program that takes three strings:
- The first and the third one are representations of base-10 signed integers
  that fit in an int.
- The second one is an arithmetic operator chosen from: + - * / %
The program must display the result of the requested arithmetic operation,
followed by a newline. If the number of parameters is not 3, the program
just displays a newline.
You can assume the string have no mistakes or extraneous characters. Negative
numbers, in input or output, will have one and only one leading '-'. The
result of the operation fits in an int.*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_doop(char *nb1, char operateur, char *nb2)
{
	int	nbr1;
	int	nbr2;
	int	result;

	nbr1 = atoi(nb1);
	nbr2 = atoi(nb2);
	result = 0;
	if (operateur == '+')
		result = nbr1 + nbr2;
	else if(operateur == '-')
		result = nbr1 - nbr2;
	else if(operateur == '*') //a l'exe ne fonctionne pas * doit etre ecrit '*'
		result = nbr1 * nbr2;
	else if(operateur == '/')
		result = nbr1 / nbr2;
	else if(operateur == '%')
		result = nbr1 % nbr2;
	printf("%d\n", result);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		write(1, "\n", 1);
		return(0);
	}
	ft_doop(argv[1], argv[2][0], argv[3]);
	return(0);
}
