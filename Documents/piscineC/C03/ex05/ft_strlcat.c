/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jibanez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 17:00:45 by jibanez-          #+#    #+#             */
/*   Updated: 2020/11/05 10:21:53 by jibanez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		++i;
	return (i);
}

unsigned int	ft_strlcat(char *dst, char *src, unsigned int size)
{
	char			*d;
	char			*s;
	unsigned int	i;
	unsigned int	dest_len;

	d = dst;
	s = src;
	i = size;
	while (i-- != 0 && *d != '\0')
		d++;
	dest_len = d - dst;
	i = size - dest_len;
	if (i == 0)
		return (dest_len + ft_strlen(s));
	while (*s)
	{
		if (i != 1)
		{
			*d++ = *s;
			i--;
		}
		s++;
	}
	*d = '\0';
	return (dest_len + (s - src));
}
