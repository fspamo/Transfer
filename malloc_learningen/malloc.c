#include <stdlib.h>

int *ft_range(int min, int max)
{
	int i;
	int *array;

	i = min;
	if(min >= max)
		return 0;
	array = (int*)malloc((max - min) * sizeof(int));

	while(min < max)
	{
		array[i] = min;
		min++;
	}

	return array;
}

#include <stdio.h>

int main(void)
{
	int min, max, i;

	min = 12;
	max = 21;
	i = 12;
	int *arr = ft_range(min, max);
	while(i < max)
	{
		printf("%d", arr[i]);
		i++;
	}
}
