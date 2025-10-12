#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *c)
{
	int i = 0;
	while(c[i] != '\0')
	{
		i++;
	}
	return i;
}

int appeared_before(char *av, int i, char c)
{
	int j = 0;

	while(j < i)
	{
		if(c == av[j])
			return 1;
		j++;
	}
	return 0;
}

int main(int ac, char **av)
{
	int i = 1;
	int k = 1; // 1 2
	if(ac == 3)
	{
		write(1,&av[1][0],1);
		while(av[k][i] != '\0')
		{
			if(appeared_before(av[1], i, av[k][i]))
			{
				write(1,&av[k][i],1);
			}
			if (ft_strlen(av[1]) == i - 1 && k == 1)
			{
				i = 0;
				k++;
			}
			i++;
		}
	}
}
