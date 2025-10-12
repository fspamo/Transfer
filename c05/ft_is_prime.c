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

int ft_is_prime(int nb)
{
	int i;

	i = 2;
	if(nb < 2)
		return 0;
	if(nb == 2 || nb == 3)
		return 1;
	if(nb % 2 == 0 && nb > 2)
		return 0;
	while(i < ft_sqrt(nb))
	{
		if(nb % i != 0)
		{
			i++;
		}else{
			return 0;
		}
	}
	return 1;
}

#include <stdio.h>

int main(void)
{
	int nb = 14;
	printf("%d", ft_is_prime(nb));
}
