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
	unsigned int	src_size;
	unsigned int	dest_size;
	unsigned int	i;

	dest_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	i = 0;

	if (dest_size >= size)
		return size + src_size;

	while (src[i] && (dest_size + i + 1) < size)
	{
		dest[dest_size + i] = src[i];
		i++;
	}

	dest[dest_size + i] = '\0';
	return dest_size + src_size;
}

int main(void)
{
	char src[] = "world";
	char dest[20] = "helloksdfkj";
	printf("%d", ft_strlcat(dest, src, 9));
	//ft_strlcat(dest, src, 40);
}
