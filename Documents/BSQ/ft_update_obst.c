/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_update_obst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jibanez- <jibanez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 16:38:44 by jibanez-          #+#    #+#             */
/*   Updated: 2020/11/11 19:03:23 by jibanez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_head.h"

void	ft_update_obst(char **grid, int **temp_grid, t_map_info map)
{
	int i;
	int j;

	i = 0;
	while (i < map.y)
	{
		j = 0;
		while (j < map.x)
		{
			if (grid[i][j] == map.obstacle)
				temp_grid[i][j] = 0;
			j++;
		}
		i++;
	}
}
