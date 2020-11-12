/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_head.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jibanez- <jibanez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 14:55:31 by jibanez-          #+#    #+#             */
/*   Updated: 2020/11/12 10:59:09 by jibanez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEAD_H
# define FT_HEAD_H
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

typedef struct	s_map_info
{
	int		y;
	int		x;
	int		error;
	char	empty;
	char	obstacle;
	char	full;
	char	*content;
}				t_map_info;

typedef struct	s_solution
{
	int		y;
	int		x;
	int		size;
}				t_solution;

struct s_map_info	ft_read_and_learn(void);
struct s_map_info	ft_map_detail(t_map_info map);
void				ft_putstr(char *str);
int					ft_validate(t_map_info map);
void				ft_binary(char **grid, int **temp_grid, t_map_info map);
void				ft_grid(char **grid, t_map_info map);
void				ft_malloc_grid_int(int **temp_grid, int y, int x);
void				ft_malloc_grid(char **grid, int y, int x);
void				ft_malloc_grid_int(int **grid, int y, int x);
void				ft_game_init(char **grid, int **temp_grid, t_map_info map);
void				ft_print_char(char **grid, t_map_info map);
void				ft_init_row_n_col(int **temp_grid, t_map_info map);
void				ft_update_obst(char **grid, int **temp_grid, t_map_info map);
void				ft_propagate(char **grid, int **temp_grid, t_map_info map);
void				ft_draw_solution(char **grid, t_solution sol, t_map_info map);
t_solution			ft_find_solution(int **grid, t_map_info map);
void				ft_read_arg(char *filename);
t_map_info			open_file(char *path);
void				ft_game(char **grid, int **temp_grid, t_map_info map);

#endif
