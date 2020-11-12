#include <unistd.h>

int main(void)
{
	char i;

	i = '9';
	while (i >= '0')
	{
		write(1, &i, 4);
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
