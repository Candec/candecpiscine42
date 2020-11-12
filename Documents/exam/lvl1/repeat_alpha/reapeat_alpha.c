int main(int argc, char *argv[])
{
	int i;
	int temp;

	i = 0;
	temp = 0;
	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		while (argv[1][i])
			i++;
		while (temp < i)
		{
			if (argv[1][temp] > 31 && argv[1][temp] < 1)
			temp = argv[1][temp];
			while (temp > 0)
			{
				write(1, argv[1][temp], 1);
				temp--;
			}
		}
	}
}