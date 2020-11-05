/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jibanez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 10:19:07 by jibanez-          #+#    #+#             */
/*   Updated: 2020/11/03 10:19:09 by jibanez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	print_hex(unsigned char c)
{
	c = c + '0';
	c += c > '9' ? 39 : 0;
	write(1, &c, 1);
}

void	ft_putnbr(unsigned char nb)
{
	write(1, "\\", 1);
	print_hex(nb / 16);
	print_hex(nb % 16);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			ft_putnbr(str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
