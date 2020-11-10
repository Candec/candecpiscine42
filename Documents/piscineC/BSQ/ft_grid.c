/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grid.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jibanez- <jibanez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 15:07:12 by jibanez-          #+#    #+#             */
/*   Updated: 2020/11/10 20:44:11 by jibanez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_head.h"

char	**ft_grid(char **grid, char *argv)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;

	while (argv[k] != '\n')
		k++;
	k++;
	while (argv[k] != '\0')
	{
		grid[i][j] = argv[k];
		if (argv[k] == '\n')
		{
			i++;
			k++;
			j = 0;
		}
		j++;
		k++;
	}
	return (grid);
}
