/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jibanez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 19:26:00 by jibanez-          #+#    #+#             */
/*   Updated: 2020/11/05 19:26:02 by jibanez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		++i;
	return (i);
}

char	*ft_strcat(char *dest, char *src, char *sep)
{
	int dest_len;
	int i;

	dest_len = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	i = 0;
	while (sep[i] != '\0')
	{
		dest[dest_len + i] = sep[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*master;
	int		i;

	i = 1;
	master = malloc((ft_strlen(strs[0]) + ft_strlen(strs[i])) * sizeof(char));
	if (size < 1)
		return (master = 0);
	else if (size == 1)
		return (master = strs[0]);
	else if (size > 1)
	{
		while (i < size)
		{
			master = ft_strcat(strs[0], strs[i], sep);
			i++;
		}
	}
	return (master);
}

int		main(void)
{
	int		index;
	char	**strs;
	char	*separator;
	char	*result;

	strs = (char**)malloc(4 * sizeof(strs));
	strs[0] = "lol";
	strs[1] = "1234";
	strs[2] = "poiuic";
	strs[3] = "1234";
	separator = "";
	index = 0;
	while (index < 4)
	{
		result = ft_strjoin(index, strs, separator);
		printf("%d %s", index, result);
		free(result);
		index++;
	}
}
