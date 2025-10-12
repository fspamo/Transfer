#include <stdio.h>

int ft_sqrt(int nb)
{
	int gap;
	int previous_number;
	int target;

	target = nb;
	gap = 0;
	previous_number = nb;

	while ((nb * nb) != target)
	{
		if ((nb * nb) > target)
		{
			previous_number = nb;
			nb = (gap + nb) / 2;
		}
		else if ((nb * nb) < target)
		{
			gap = nb;
			nb = (previous_number + nb) / 2;
		}

		if (previous_number - gap <= 1)
			return 0;
	}
	return nb;
}


int main(void)
{
	int nb = 169;
	printf("%d", ft_sqrt(nb));
}
