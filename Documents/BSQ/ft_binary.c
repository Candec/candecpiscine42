/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_binary.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jibanez- <jibanez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 11:45:21 by jibanez-          #+#    #+#             */
/*   Updated: 2020/11/11 19:03:10 by jibanez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_head.h"
#include <stdio.h>

void	ft_binary(char **grid, int **temp_grid, t_map_info map)
{
	*temp_grid = malloc(map.y * map.x * sizeof(*temp_grid) + 1);
	ft_malloc_grid_int(temp_grid, map.y, map.x);
	ft_init_row_n_col(temp_grid, map);
	ft_update_obst(grid, temp_grid, map);
}
