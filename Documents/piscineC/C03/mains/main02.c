#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

int	main(void)
{
	char s1[100] = "text to copy";
	char *s2 = "text to cat";

	printf("%s \n", ft_strcat(s1, s2));

	char s4[100] = "text to copy";
	char *s5 = "text to cat";
	
	printf("%s \n", strcat(s4, s5));
	return (0);
}
