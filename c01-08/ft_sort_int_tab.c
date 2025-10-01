#include <unistd.h>
#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = 0;
	size = size - 1;

	while(i < size)
	{
		if(tab[i] > tab[i+1])
		{
			temp = tab[i];
			tab[i] = tab[i+1];
			tab[i+1] = temp;
			i = 0;
		}else if(tab[i] < tab[i+1])
		{
			i++;
		}
	}
}

int main(void)
{
	int tab[] = {99, 77, 11, 66, 44, 88, 33};
	int size = 7;

	ft_sort_int_tab(tab, size);
	int i = 0;

	while(i < 7)
	{
		printf("%d", tab[i]);
		printf("\n");
		i++;
	}
}
