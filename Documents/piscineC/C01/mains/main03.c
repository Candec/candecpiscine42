#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int *div, *mod;

	div = malloc(sizeof(int *));
	mod = malloc(sizeof(int *));

	ft_div_mod(429, 10, div, mod);
	printf("%d %d", *div, *mod);

	free(mod);
	free(div);
	printf("\n\nFinished testing div and mod. Expected 42 9\n");
	return 0;
}