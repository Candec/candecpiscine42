/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_row_n_col.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jibanez- <jibanez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 16:34:41 by jibanez-          #+#    #+#             */
/*   Updated: 2020/11/11 19:03:16 by jibanez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_head.h"

void	ft_init_row_n_col(int **temp_grid, t_map_info map)
{
	int i;
	int j;

	i = 0;
	while (i < map.y)
	{
		j = 0;
		while (j < map.x)
		{
			temp_grid[0][j] = 1;
			temp_grid[i][0] = 1;
			j++;
		}
		i++;
	}
}
