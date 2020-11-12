/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solution_finder.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jibanez- <jibanez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 19:17:33 by jibanez-          #+#    #+#             */
/*   Updated: 2020/11/11 22:57:09 by jibanez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_head.h"

t_solution	ft_find_solution(int **grid, t_map_info map)
{
	int			i;
	int			j;
	t_solution	sol;

	i = 0;
	j = 0;
	sol.y = 0;
	sol.x = 0;
	sol.size = 0;
	while (i < map.y)
	{
		j = 0;
		while (j < map.x)
		{
			if (grid[i][j] > sol.size)
			{
				sol.size = grid[i][j];
				sol.y = i;
				sol.x = j;
			}
			j++;
		}
		i++;
	}
	return (sol);
}
