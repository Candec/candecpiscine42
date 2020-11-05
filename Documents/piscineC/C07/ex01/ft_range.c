/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jibanez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 14:58:51 by jibanez-          #+#    #+#             */
/*   Updated: 2020/11/05 14:58:53 by jibanez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int i;
	int range;
	int *arr;

	i = 1;
	if (max < min)
		return (0);
	range = max - min;
	arr = malloc(range * sizeof(int));
	arr[0] = min;
	while (i < range)
	{
		arr[i] = arr[i - 1] + 1;
		i++;
	}
	return (arr);
}

int main(void)
{
	int i;
	int b;
	int *a;
	
	i = 0;
	b = 10;
	a = ft_range(4, b);

	while (i < b)
	{
		printf("%d ", a[i]);
		i++;
	}
	return(0);
}