/* Write a function that determines if a given number is a power of 2.
This function returns 1 if the given number is a power of 2, otherwise it returns 0.
Your function must be declared as follows:
int	    is_power_of_2(unsigned int n); */

int	is_power_of_2(unsigned int n)
{
	if(n == 0)
		return(0);
	while (n % 2 == 0) //verifie si n est divisible par 2
		n = n / 2 //divive n a chaque iteration
	return(n == 1)
}
