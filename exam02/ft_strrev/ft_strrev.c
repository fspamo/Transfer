#include <unistd.h>
#include <stdio.h>

char	*ft_strrev(char *str)
{
	int i = 0;
	int j = 0;
	char temp;
	while(str[i])
		i++;

	i--;

	while(j < i)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		j++;
		i--;
	}
	return str;
}

int main(void)
{
	char str[] = "string";
	ft_strrev(str);
	printf("%s", str);
}
