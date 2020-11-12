/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 17:21:14 by rshirley          #+#    #+#             */
/*   Updated: 2020/10/24 18:08:45 by rshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_x(int x)
{
	int a;

	a = x;
	while (a > 0)
	{
		if (a == 1 || a == x)
		{
			ft_putchar('A');
		}
		else
		{
			ft_putchar('B');
		}
		a--;
	}
	ft_putchar('\n' + 0);
}

void	ft_x2(int x)
{
	int a;

	a = x;
	while (a > 0)
	{
		if (a == 1 || a == x)
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
		a--;
	}
	ft_putchar('\n' + 0);
}

void	ft_y(int x, int y)
{
	int init_x;

	init_x = x;
	while (y > 2)
	{
		while (x > 0)
		{
			if (x == 1 || x == init_x)
			{
				ft_putchar('B');
			}
			else
			{
				ft_putchar(' ');
			}
			x--;
		}
		x = init_x;
		ft_putchar('\n' + 0);
		y--;
	}
}

void	rush(int x, int y)
{
	if (x >= 0 && y >= 0)
	{
		ft_x(x);
		if (y > 2)
		{
			ft_y(x, y);
			ft_x2(x);
		}
		else if (y == 2)
		{
			ft_x2(x);
		}
	}
}
