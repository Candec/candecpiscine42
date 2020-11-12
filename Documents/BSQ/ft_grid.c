/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grid.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jibanez- <jibanez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 15:07:12 by jibanez-          #+#    #+#             */
/*   Updated: 2020/11/11 19:03:13 by jibanez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_head.h"

void	ft_grid(char **grid, t_map_info map)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	ft_malloc_grid(grid, map.y, map.x);
	while (map.content[k] != '\n')
		k++;
	k++;
	while (map.content[k] != '\0')
	{
		if (map.content[k] == '\n')
		{
			i++;
			k++;
			grid[i][j] = '\0';
			j = 0;
		}
		grid[i][j] = map.content[k];
		j++;
		k++;
	}
}
