/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jibanez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 20:50:52 by jibanez-          #+#    #+#             */
/*   Updated: 2020/10/23 16:13:18 by jibanez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		print(char hun, char tens, char units, int flag)
{
	char space;
	char coma;

	space = ' ';
	coma = ',';
	if (flag)
	{
		write(1, &coma, 1);
		write(1, &space, 1);
	}
	write(1, &hun, 1);
	write(1, &tens, 1);
	write(1, &units, 1);
	return (1);
}

void	ft_print_comb(void)
{
	char	n1;
	char	n2;
	char	n3;
	int		flag;

	flag = 0;
	n1 = '0';
	while (n1 <= '9')
	{
		n2 = '1';
		while (n2 <= '9')
		{
			n3 = '2';
			while (n3 <= '9')
			{
				if (n3 > n2 && n2 > n1)
				{
					flag = print(n1, n2, n3, flag);
				}
				n3++;
			}
			n2++;
		}
		n1++;
	}
}
