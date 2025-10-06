#include <unistd.h>

int ft_str_is_numeric(char *str)
{
	int	i;
	int isNumeric;

	i = 0;
	isNumeric= 1;
	while(str[i] != '\0' && isNumeric == 1)
	{
		if(str[i] >= 48 && str[i] <= 57)
		{
			i++;
		}
		else
		{
			write(1, "0", 1);
			isNumeric = 0;
		}
	}
	if (isNumeric == 1)
	{
		write(1, "1", 1);
	}
	return isNumeric;
}

int main(void)
{
	ft_str_is_numeric("3475890279457284");
}

