/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_propagate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jibanez- <jibanez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 17:39:03 by jibanez-          #+#    #+#             */
/*   Updated: 2020/11/11 23:00:27 by jibanez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_head.h"

int		ft_min(int a, int b, int c)
{
	int m;

	m = a;
	if (m > b)
		m = b;
	if (m > c)
		m = c;
	return (m);
}

void	ft_propagate(char **grid, int **a, t_map_info map)
{
	int i;
	int j;

	i = 1;
	j = 1;
	while (i < map.y)
	{
		j = 1;
		while (j < map.x)
		{
			a[i][j] = 1 + ft_min(a[i - 1][j - 1], a[i - 1][j], a[i][j - 1]);
			ft_update_obst(grid, a, map);
			j++;
		}
		i++;
	}
}
