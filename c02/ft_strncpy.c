#include <unistd.h>
#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while(i < n && src[i] != '\0')
	{
		if(src[i] == '\0')
		{
			dest[i] = '\0';
		}
		dest[i] = src[i];
		i++;
	}
}

int main(void)
{
	char dest[10]; 
	ft_strncpy(dest, "I can hear the thunder roaring...", 10);
	printf("%s", dest);
}
