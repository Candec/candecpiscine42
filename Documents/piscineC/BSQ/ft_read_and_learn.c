/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_and_learn.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jibanez- <jibanez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 15:55:35 by jibanez-          #+#    #+#             */
/*   Updated: 2020/11/10 20:44:18 by jibanez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_head.h"

long int			line_length(int *file, char *pos)
{
	int	ret;

	ret = 0;
	while (read(*file, pos, sizeof(char)) != 0)
		ret++;
	return (ret);
}

t_map_info			open_file(char *path)
{
	int			fileread_l;
	int			fileread_p;
	char		i;
	int			b;
	t_map_info	map;

	fileread_l = open(path, O_RDONLY | O_APPEND);
	fileread_p = open(path, O_RDONLY | O_APPEND);
	i = 1;
	b = -1;
	if (!(map.content = malloc((line_length(&fileread_l, &i) + 1))))
	{
		map.error = 1;
		return (map);
	}
	while (read(fileread_p, &i, sizeof(char) != 0))
		map.content[++b] = i;
	close(fileread_l);
	close(fileread_p);
	map.content[++b] = '\0';
	return (map);
}

struct s_map_info	ft_read_and_learn(char *argv)
{
	char		*arr_file;
	t_map_info	map;

	map = open_file(argv);
	if (!map.content)
	{
		map.error = 1;
		return (map);
	}
	map = ft_map_detail(map);
	return (map);
}
