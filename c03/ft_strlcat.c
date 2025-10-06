#include <stdio.h>

int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}
unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	dest_length = 0;
	int	src_length = 0;
	int i = 0;
	
	while(dest_length < size && dest[dest_length])
	{
		dest_length;
	}
	if(dest_length == size)
	{
		return (size + src_length);
	}
	while((dest_length + i + 1) < size && src[i])
	{
		dest[dest_length + i] = src[i];
		i++;
	}
	if (dest_length + i < size)
		dest[dest_length + i] = '\0';

	return (dest_length + src_length);
}

int main(void)
{
	char src[] = "something";
	char dest[40] = "in the way";
	int size = 17;

	ft_strlcat(dest, src, size);
}
