#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str, int i)
{
	while(str[i] != '\0')
	{
		i++;
	}
	return i;
}

char *ft_rev_print (char *str)
{
	int i = 0;
	i = ft_strlen(str, i);
	while(i >= 0)
	{
		write(1,&str[i],1);
		i--;
	}
	return str;
}

int main(int argc, char **argv)
{
	ft_rev_print(argv[1]);
}
