/*
Reproduce exactly the behavior of the function strcspn
(man strcspn).
The function should be prototyped as follows:
size_t	ft_strcspn(const char *s, const char *reject);*/

#include <stdio.h>

//Calcul longueur du segment inital se qui ne contient que des octets absents de reject

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t i;
	size_t j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while(reject[j] != '\0')
		{
			if(s[i] == reject[j])
				return(i);
			j++;
		}
		i++;
	}
	return(i);
}

int	main(void)
{
	const	char *s = "Il faut que je desinstalle Isaac, car j'en suis cracked!";
	const char *reject = "nianiania";

	size_t result = ft_strcspn(s, reject);
	printf("%zu\n", result); //zu = pour size_t
	return(0);
}

