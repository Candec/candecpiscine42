/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_solution.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jibanez- <jibanez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 19:46:23 by jibanez-          #+#    #+#             */
/*   Updated: 2020/11/11 21:21:31 by jibanez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_head.h"

void	ft_draw_solution(char **grid, t_solution sol, t_map_info map)
{
	int i;
	int j;

	i = sol.y - sol.size + 1;
	j = sol.x - sol.size + 1;
	while (i <= sol.y)
	{
		j = sol.x - sol.size + 1;
		while (j <= sol.x)
		{
			grid[i][j] = map.full;
			j++;
		}
		i++;
	}
	ft_print_char(grid, map);
}
