/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_arg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jibanez- <jibanez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 21:48:37 by jibanez-          #+#    #+#             */
/*   Updated: 2020/11/11 22:57:52 by jibanez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_head.h"

void	ft_read_arg(char *filename)
{
	char	c;
	int		check;
	int		fd;

	check = 2;
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0644);
	while (read(1, &c, 1) != -1)
	{
		if (c == 10)
			check--;
		else if (c != 10)
			check = 2;
		if (check != 0)
			write(fd, &c, 1);
		if (check == 0)
			break ;
	}
	close(fd);
}
