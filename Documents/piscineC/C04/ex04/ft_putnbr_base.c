/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jibanez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 14:46:07 by jibanez-          #+#    #+#             */
/*   Updated: 2020/11/03 14:46:11 by jibanez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		++i;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		check(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base == 0)
		return (0);
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] == 127)
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int str, char *base)
{
	unsigned int nb;
	unsigned int basel;

	basel = ft_strlen(base);
	if (check(base))
	{
		if (str < 0)
		{
			write(1, "-", 1);
			nb = str * -1;
		}
		else
			nb = str;
		if (nb >= basel)
		{
			ft_putnbr_base(nb / basel, base);
			ft_putnbr_base(nb % basel, base);
		}
		else
			write(1, base + nb, 1);
	}
}
