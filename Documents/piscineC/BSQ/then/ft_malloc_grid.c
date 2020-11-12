/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc_grid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jibanez- <jibanez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 11:49:50 by jibanez-          #+#    #+#             */
/*   Updated: 2020/11/11 19:03:18 by jibanez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_head.h"

void	ft_malloc_grid(char **grid, int y, int x)
{
	int i;

	i = 0;
	while (i <= y)
	{
		grid[i] = malloc(x * sizeof(grid) + 1);
		i++;
	}
}
