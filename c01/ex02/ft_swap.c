#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}

int main(void)
{
	int a = 1337;
	int b = 42;
	printf("a was: %d b was: %d", a, b);
	ft_swap(&a,&b);
	printf("\n");
	printf("now they became a: %d and b: %d", a, b);
	printf("\n");
	return 0;
}
