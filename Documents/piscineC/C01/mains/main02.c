#include <stdio.h> 
#include <stdlib.h>

void	ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

int	main(void)
{
	int *a;
	int *b;

	a = malloc(sizeof(int*));
	b = malloc(sizeof(int*));

	*a = 42;
	*b = 24;

	printf("%d %d\n", *a, *b);
	ft_swap(a, b);
	printf("%d %d", *a, *b);

	free(b);
	free(a);

	return (0);
}