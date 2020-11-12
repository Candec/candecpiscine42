/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jibanez- <jibanez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 14:33:31 by jibanez-          #+#    #+#             */
/*   Updated: 2020/11/11 22:40:45 by jibanez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_head.h"

void	ft_print_char(char **grid, t_map_info map)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i <= map.y)
	{
		j = 0;
		while (j < map.x)
		{
			if (grid[i][j] >= 32 && grid[i][j] <= 127)
				write(1, &grid[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
