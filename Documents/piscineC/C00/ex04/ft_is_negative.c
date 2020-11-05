/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jibanez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 19:16:19 by jibanez-          #+#    #+#             */
/*   Updated: 2020/10/23 12:34:42 by jibanez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char h;
	char p;

	h = 'N';
	p = 'P';
	if (n >= 0)
	{
		write(1, &p, 1);
	}
	else
	{
		write(1, &h, 1);
	}
}