/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 21:11:56 by fpinto            #+#    #+#             */
/*   Updated: 2020/10/24 21:12:03 by fpinto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_x(int x, char first_c, char last_c)
{
	int a;

	a = x;
	while (a > 0)
	{
		if (a == x)
		{
			ft_putchar(first_c);
		}
		else if (a == 1)
		{
			ft_putchar(last_c);
		}
		else if (a > 0)
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
		ft_x(x, 'A' + 0, 'C' + 0);
		if (y > 2)
		{
			ft_y(x, y);
			ft_x(x, 'C' + 0, 'A' + 0);
		}
		else if (y == 2)
		{
			ft_x(x, 'C' + 0, 'A' + 0);
		}
	}
}
