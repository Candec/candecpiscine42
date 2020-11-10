/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_detail.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jibanez- <jibanez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 14:55:38 by jibanez-          #+#    #+#             */
/*   Updated: 2020/11/10 20:44:17 by jibanez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_head.h"

int					ft_line_lenght(t_map_info map)
{
	int			i;
	int			k;

	i = 0;
	k = 0;
	while (map.content[i] != '\0')
	{
		if (map.content[i] == '\n')
			k++;
		i++;
	}
	return (k);
}

struct s_map_info	ft_map_detail(t_map_info map)
{
	int			i;
	int			k;
	int			temp;

	i = 0;
	k = 0;
	while (map.content[i] != '\n')
		i++;
	map.empty = map.content[i - 3];
	map.obstacle = map.content[i - 2];
	map.full = map.content[i - 1];
	i++;
	temp = i;
	while (map.content[i] != '\n')
		i++;
	map.x = i - temp;
	map.y = ft_line_lenght(map);
	return (map);
}
