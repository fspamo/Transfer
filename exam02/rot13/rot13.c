#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	if(ac > 1)
	{
		i = 0;
		while(av[1][i] != '\0')
		{
			char c = av[1][i];
			if((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
			{
				c += 13;
				write(1,&c,1);
			}
			else if((c >= 'm' && c <= 'z') || (c >= 'M' && c <= 'Z'))
			{
				c -= 13;
				write(1,&c,1);
			}else{
				write(1,&c,1);
			}
			i++;
		}
	}
}
