#include <unistd.h>

int ft_str_is_uppercase(char *str)
{
	int	i;
	int isUppercase;

	i = 0;
	isUppercase = 1;
	while(str[i] != '\0' && isUppercase == 1)
	{
		if(str[i] >= 65 && str[i] <= 90)
		{
			i++;
		}
		else
		{
			write(1, "0", 1);
			isUppercase = 0;
		}
	}
	if (isUppercase == 1)
	{
		write(1, "1", 1);
	}
	return isUppercase; 
}

int main(void)
{
	ft_str_is_uppercase("HElLOIMUPPERCASE");  // Should print 1
	return 0;
}

