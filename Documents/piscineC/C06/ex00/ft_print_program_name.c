/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jibanez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 15:18:29 by jibanez-          #+#    #+#             */
/*   Updated: 2020/11/04 15:18:31 by jibanez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	char	*prog_name;

	(void)argc;
	i = 0;
	prog_name = argv[0];
	while (prog_name[i] != 0)
		i++;
	write(1, prog_name, i);
	write(1, "\n", 1);
	return (0);
}
