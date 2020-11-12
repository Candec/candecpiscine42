/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_game_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jibanez- <jibanez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 11:38:33 by jibanez-          #+#    #+#             */
/*   Updated: 2020/11/11 22:56:35 by jibanez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_head.h"

void	ft_game_init(char **grid, int **temp_grid, t_map_info map)
{
	ft_binary(grid, temp_grid, map);
	ft_propagate(grid, temp_grid, map);
}
