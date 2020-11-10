/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jibanez- <jibanez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 18:58:11 by jibanez-          #+#    #+#             */
/*   Updated: 2020/11/10 20:44:19 by jibanez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_head.h"

int	ft_validate(t_map_info map)
{
	if (map.empty == map.error || map.error == map.full
	|| map.full == map.empty)
		return (1);

	/*add validations here*/

	return (0);
}
