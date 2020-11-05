#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, 	unsigned int n);

int	main(void)
{
	char *s1 = "perovaca que";
	char *s2 = "est";
	
	printf("%d\n", ft_strncmp(s1, s2, 2));
	printf("%d", strncmp(s1, s2, 2));

	return(0);
}