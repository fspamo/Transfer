#include <unistd.h>
#include <stdio.h>

void ft_print_comb2(void)
{
	int i, j;
	i = 0;
	while(i <= 98)
	{
		j = i + 1;
		while(j <= 99)
		{
			if(i <= 9)
			{
				printf("0");
				printf("%d ", i);
			}
			if(j <= 9)
			{
				printf("0");
				printf("%d", j);
			}else{
				printf("%d ", i);
				printf("%d", j);
			}
			printf(", ");
			j++;
		}
		i++;
	}
}

int main(void)
{
	ft_print_comb2();
}
