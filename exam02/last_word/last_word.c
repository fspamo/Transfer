#include <unistd.h>

int main(int ac, char **av)
{
	if(ac > 1)
	{
		int i = 0;
		while(av[1][i] != '\0')
		{
			i++;
		}
		while(av[1][i] != ' ' ) // mind the 9 to 13 characters
		{
			i--;
		}
		i++;
		while(av[1][i] != '\0')
		{
			write(1,&av[1][i],1);
			i++;
		}
	}
}

