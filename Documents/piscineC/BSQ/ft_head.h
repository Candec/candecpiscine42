/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_head.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jibanez- <jibanez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 14:55:31 by jibanez-          #+#    #+#             */
/*   Updated: 2020/11/10 20:44:13 by jibanez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEAD_H
# define FT_HEAD_H

	typedef struct s_map_info
	{
		int y;
		int x;
		int error;
		char empty;
		char obstacle;
		char full;
		char *content;
	} t_map_info;

# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

struct s_map_info	ft_read_and_learn(char *argv);
struct s_map_info	ft_map_detail(t_map_info map);
void				ft_putstr(char *str);
int					ft_validate(t_map_info map);
char				**ft_grid(char *grid[], char argv[]);

#endif