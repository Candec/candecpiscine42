#include <unistd.h>
#include <stdio.h> 

int check_valid(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
		++i;

	if (i == 31)
	{
		while (str[j] > '0' && str[j] < '5' && j < i)
			j = j + 2;

		if (j != 32)
		{
			write(1, "Error\n", 6);	
			return (0);
		}
	}	
	else
	{
		write(1, "Error\n", 6);
		return (0);			
	}
	return (0);
}

int	*ft_lookup(int *up, char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j <= 6)
	{
		up[i] = str[j] - '0';
		i++;
		j = j + 2;
	}
	return(up);
}

int	*ft_lookdown(int *down, char *str)
{

	int i;
	int j;

	i = 0;
	j = 8;
	while (j <= 14)
	{
		down[i] = str[j] - '0';
		i++;
		j = j + 2;
	}
	return(down);
}

int	*ft_lookleft(int *left, char *str)
{
	
	int i;
	int j;

	i = 0;
	j = 24;
	while (j <= 30)
	{
		left[i] = str[j] - '0';
		i++;
		j = j + 2;
	}
	return(left);
}

int	*ft_lookright(int *right, char *str)
{
	int i;
	int j;

	i = 0;
	j = 16;
	while (j <= 22)
	{
		right[i] = str[j] - '0';
		i++;
		j = j + 2;
	}
	return(right);
}

void game_check_ones(int *grid, int *up, int *down, int *left, int *right)
{
	int i;

	i = 0;
	while (i < 5)
	{
		if (up[i] == 1)
			grid[i] = 4;

		if (down[i] == 1)
			grid[i + 4] = 4;

		if (left[i] == 1)
			grid[i + 8] = 4;

		if (right[i] == 1)
			grid[i + 12] = 4;
		i++;
	}
}

void game_update_fours(int *grid, int pos, int dir)
{
	if (dir == 1)
	{
		grid[pos] = 1;
		grid[4 + pos] = 2;
		grid[8 + pos] = 3;
		grid[12 + pos] = 4;
	}
	else if (dir == 2)
	{
		grid[pos] = 4;
		grid[4 + pos] = 3;
		grid[8 + pos] = 2;
		grid[12 + pos] = 1;
	}
	else if (dir == 3)
	{
		grid[pos] = 4;
		grid[1 + pos] = 3;
		grid[2 + pos] = 2;
		grid[3 + pos] = 1;
	}	
	else if (dir == 4)
	{
		grid[pos] = 1;
		grid[1 + pos] = 2;
		grid[2 + pos] = 3;
		grid[3 + pos] = 4;
	}

}

void game_check_fours(int *grid, int *up, int *down, int *left, int *right)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (up[i] == 4)
			game_update_fours(grid, i, 1);

		if (down[i] == 4)
			game_update_fours(grid, i, 2);

		if (left[i] == 4)
			game_update_fours(grid, i, 3);

		if (right[i] == 4)
			game_update_fours(grid, i, 4);
		i++;
	}
}

void print(int *grid)
{
	int i;
	int j;

	j = 0;
	i = 1;

	while (j < 16)
	{
		printf("%d", grid[j]);
		printf(" ");
		j++;

		if (i == 4)
		{
			printf("\n");
			i = 0;
		}
		i++;
	}
}

void logic(int *up, int *down, int *left, int *right)
{
	int grid [16] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

	game_check_fours(grid, up, down, left, right);
	//game_check_ones(grid, up, down, left, right);


	print(grid);
}

void ft_skyscrapper(char *str)
{
	check_valid(str);
	int up[4];
	int down[4];
	int left[4];
	int right[4];
	ft_lookup(up, str);
	ft_lookdown(down, str);
	ft_lookleft(left, str);
	ft_lookright(right, str);
	logic(up, down, left, right);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "Error\n", 6);
	}
	else
		ft_skyscrapper(argv[1]);

	return (0);
}