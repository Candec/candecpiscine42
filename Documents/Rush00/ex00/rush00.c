/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jibanez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 13:27:55 by jibanez-          #+#    #+#             */
/*   Updated: 2020/10/24 13:36:14 by jibanez-         ###   ########.fr       */
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
			ft_putchar('o');
		}
		else if (a > 0)
		{
			ft_putchar('-');
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
				ft_putchar('|');
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
			ft_x(x);
		}
		else if (y == 2)
		{
			ft_x(x);
		}
	}
}
