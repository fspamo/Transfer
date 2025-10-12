#include <unistd.h>

int main(int argc, char **argv)
{
	if(argc > 1)
	{
		int i = 0;
		while(argv[1][i] == ' ' || ((argv[1][i] >= 9) && argv[1][i] <= 13))
		{
			i++;
		}
		while (argv[1][i] != '\0' && argv[1][i] != ' ' && !(argv[1][i] >= 9 && argv[1][i] <= 13))
		{
			write(1,&argv[1][i],1);
			i++;
		}
	}
}

