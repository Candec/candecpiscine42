/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_game.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jibanez- <jibanez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 23:16:10 by jibanez-          #+#    #+#             */
/*   Updated: 2020/11/11 23:21:39 by jibanez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_head.h"

void	ft_game(char **grid, int **temp_grid, t_map_info map)
{
	ft_grid(grid, map);
	temp_grid = malloc(map.x * map.y * sizeof(int));
	ft_game_init(grid, temp_grid, map);
}
