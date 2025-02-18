/*Write a function that converts the string argument str (base N <= 16)
to an integer (base 10) and returns it.
The characters recognized in the input are: 0123456789abcdef
Those are, of course, to be trimmed according to the requested base. 
For example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".
Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".
Minus signs ('-') are interpreted only if they are the first character of the
string.
Your function must be declared as follows:
int	ft_atoi_base(const char *str, int str_base);*/

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1)
	return(0);
}

int	ft_atoi_base(const char *str, int_str_base)
{
	int	sign = 1;
	int	nbr = 0;
	int digit;
	int i = 0;
	
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while(str[i] != '\0')
	{
		nbr = nbr * str_base;
		if(str[i] >= '0' && str[i] <= '9')
			nbr = nbr + (*str - '0')
		else if(ft_isalpha(str[i] == 1)
		{
			digit = str[i] + 32;
			digit = str[i] -'a' + 10;
		}
		else 
			break;
		if(digit >= str_base)
			break;
		nbr = nbr * str_base + digit;
		i++;
	}
	return(nbr * sign);
}
		
