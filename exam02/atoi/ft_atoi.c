#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int i = 0;
	int sign_count = 0;
	int real_number = 0;
	int sign = 1;
	while(*str)
	{
		while(*str == ' ' || ((*str >= 9) && (*str <= 13)))
		{
			str++;
		}

		while(*str == '+' || *str == '-')
		{
			if (*str == '-')
			{
				sign = -1;
			}
			sign_count++;
			str++;
		}

		if(sign_count > 1)
			return 0 ;

		while(*str >= '0' && *str <= '9')
		{
			if(i > 0)
			{
				real_number *= 10;
			}
			real_number += (*str - '0');
			i++;
			str++;
		}
		break;
	}
	return sign * real_number;
}

int main(int ac, char **av)
{
	printf("%d", atoi(av[1]));
	printf("\n");
	printf("%d", ft_atoi(av[1]));
	printf("\n");
}
