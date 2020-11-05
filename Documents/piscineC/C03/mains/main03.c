#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char s1[100] = "text to copy";
	char *s2 = "text to cat";

	printf("%s \n", ft_strncat(s1, s2, 4));

	char s4[100] = "text to copy";
	char *s5 = "text to cat";
	
	printf("%s \n", strncat(s4, s5, 4));
	return (0);
}
