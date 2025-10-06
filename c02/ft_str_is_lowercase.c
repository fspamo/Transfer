#include <unistd.h>

int ft_str_is_lowercase(char *str)
{
	int	i;
	int isLowercase;

	i = 0;
	isLowercase = 1;
	while(str[i] != '\0' && isLowercase == 1)
	{
		if((str[i] >= 97 && str[i] <= 122))
		{
			i++;
		}
		else
		{
			write(1, "0", 1);
			isLowercase = 0;
		}
	}
	if (isLowercase == 1)
	{
		write(1, "1", 1);
	}
	return isLowercase; 
}

int main(void)
{
	ft_str_is_lowercase("ksldjfjkldfjskldjflksdjfkj");
	return 0;
}
