#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char *s1 = "text to copy and do things";
	char *s2 = "xt to";

	printf("%s \n", ft_strstr(s1, s2));
	printf("%s", strstr(s1, s2));

	return (0);
}
