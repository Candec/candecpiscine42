/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jibanez- <jibanez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 14:55:34 by jibanez-          #+#    #+#             */
/*   Updated: 2020/11/10 20:44:21 by jibanez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_head.h"

int main(int argc, char *argv[])
{
	int i;
	char **grid;
	t_map_info map;
	
	i = 0;
	if (argc < 2)
		ft_putstr("Error..");

	map = ft_read_and_learn(argv[1]);
	ft_validate(map);

	grid = malloc(map.x * map.y * sizeof(char) + 1);
	ft_grid(grid, map.content);

	//ft_validate_argv
	//ft_split
	return (0);
}