/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jibanez- <jibanez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 15:04:51 by jibanez-          #+#    #+#             */
/*   Updated: 2020/11/12 17:51:51 by jibanez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char				*ft_strdup(char *src)
{
	char	*tab;
	int		size_src;

	size_src = ft_strlen(src);
	tab = malloc(sizeof(*tab) * size_src + 1);
	ft_strcpy(tab, src);
	return (tab);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*s_tab;
	int			i;

	if (!(s_tab = (t_stock_str*)malloc(sizeof(t_stock_str) * (ac + 1))))
		return (0);
	i = 0;
	while (av[i] && i < ac)
	{
		s_tab[i].size = ft_strlen(av[i]);
		s_tab[i].str = av[i];
		s_tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	s_tab[i].size = 0;
	s_tab[i].str = 0;
	s_tab[i].copy = 0;
	return (s_tab);
}
