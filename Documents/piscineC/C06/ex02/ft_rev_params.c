/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jibanez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 17:26:27 by jibanez-          #+#    #+#             */
/*   Updated: 2020/11/04 17:26:32 by jibanez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*args;

	i = argc - 1;
	while (i > 0)
	{
		args = argv[i];
		j = 0;
		while (args[j] != '\0')
			j++;
		write(1, argv[i], j);
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
