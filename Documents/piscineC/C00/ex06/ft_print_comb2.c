/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jibanez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 16:18:46 by jibanez-          #+#    #+#             */
/*   Updated: 2020/10/26 18:30:55 by jibanez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_print_dobdigit(int a, int b, int flag)
{
	if (flag)
	{
		write(1, ", ", 2);
	}
	ft_putchar(a / 10 + '0');
	ft_putchar(a % 10 + '0');
	ft_putchar(' ');
	ft_putchar(b / 10 + '0');
	ft_putchar(b % 10 + '0');
	return (1);
}

void	ft_print_comb2(void)
{
	int a;
	int b;
	int flag;

	a = 0;
	b = 0;
	flag = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			flag = ft_print_dobdigit(a, b, flag);
			b++;
		}
		a++;
	}
}
