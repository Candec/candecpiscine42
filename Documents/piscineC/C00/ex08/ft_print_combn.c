/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jibanez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 12:35:15 by jibanez-          #+#    #+#             */
/*   Updated: 2020/10/27 15:39:33 by jibanez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int		ft_size(int n, int p)
{
	if (p > 0)
		return (n * ft_size(n, p - 1));
	else
		return (1);
}

int		ft_det_zero(int nb)
{
	if (nb < 10)
		return (1);
	else if (nb % 10 > (nb / 10) % 10)
		return (ft_det_zero(nb / 10));
	else
		return (0);
}

void	ft_print_combn(int n)
{
	int		p;
	int		i;
	int		s;

	p = ft_size(10, n);
	i = ft_size(10, n - 2) - 1;
	while (i++ < p && i <= 123456789 && n)
	{
		if (ft_det_zero(i))
		{
			if (s)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			s = i;
			while (s < ft_size(10, n - 1))
			{
				ft_putchar('0');
				s = s * 10;
			}
			ft_putnbr(i);
		}
	}
}
