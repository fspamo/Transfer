#include <unistd.h>
#include <stdio.h>

void ft_ft(int *nbr)
{
	*nbr = 42;
}

int main(void)
{
	int nbr = 1337;

	ft_ft(&nbr);
	printf("%d", nbr);
	return 0;
}
