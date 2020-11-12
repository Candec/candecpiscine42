/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jibanez- <jibanez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 14:55:34 by jibanez-          #+#    #+#             */
/*   Updated: 2020/11/11 23:22:49 by jibanez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_head.h"

int	main(int argc, char *argv[])
{
	int			i;
	char		**grid;
	int			**temp_grid;
	t_map_info	map;
	t_solution	sol;

	i = 1;
	map.error = 0;
	if (argc < 2)
	{
		map = ft_read_and_learn();
		ft_validate(map);
		grid = malloc(map.x * map.y * sizeof(char) + 1);
		ft_grid(grid, map);
		temp_grid = malloc(map.x * map.y * sizeof(int));
		ft_game_init(grid, temp_grid, map);
		sol = ft_find_solution(temp_grid, map);
		ft_draw_solution(grid, sol, map);
	}
	else
	{
		while (argv[i])
		{
			map = open_file(argv[i]);
			map = ft_map_detail(map);
			ft_validate(map);
			grid = malloc(map.x * map.y * sizeof(char) + 1);
			ft_grid(grid, map);
			temp_grid = malloc(map.x * map.y * sizeof(int));
			ft_game_init(grid, temp_grid, map);
			sol = ft_find_solution(temp_grid, map);
			ft_draw_solution(grid, sol, map);
			i++;
		}
	}
	return (0);
}
