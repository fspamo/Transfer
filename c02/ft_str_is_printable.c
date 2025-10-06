#include <unistd.h>

int ft_str_is_printable(char *str)
{
	int i;
	int isPrintable;

	i = 0;
	isPrintable = 1;
	while(str[i] != '\0' && isPrintable == 1)
	{
		if(str[i] >= 32 && str[i] <= 126)
		{
			i++;
		}
		else
		{
			write(1, "0", 1);
			isPrintable = 0;
		}
	}
	if(isPrintable == 1)
	{
		write(1, "1", 1);
	}
	return isPrintable;
}

int main(void)
{
	ft_str_is_printable(""); // Should print 1
	return 0;
}
