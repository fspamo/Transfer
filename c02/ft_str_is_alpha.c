#include <unistd.h>

int ft_str_is_alpha(char *str)
{
	int	i;
	int isAlpha;

	i = 0;
	isAlpha = 1;
	while(str[i] != '\0' && isAlpha == 1)
	{
		if((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
		{
			i++;
		}
		else
		{
			write(1, "0", 1);
			isAlpha = 0;
		}
	}
	if (isAlpha == 1)
	{
		write(1, "1", 1);
	}
	return isAlpha;
}

int main(void)
{
	ft_str_is_alpha("whatevenalphabeticalcharacteris");
	return 0;
}
