#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char *s1 = "la vaca que";
	char *s2 = "la vaca que ";
	
	printf("%d\n", ft_strcmp(s1, s2));
	printf("%d", strcmp(s1, s2));

	return(0);
}