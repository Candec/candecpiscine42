/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jibanez- <jibanez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 15:16:27 by jibanez-          #+#    #+#             */
/*   Updated: 2020/11/12 20:04:54 by jibanez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int		ft_charset(char *charset, char to_find)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (to_find == charset[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_get_next_str(char **actual, char *charset, int *next_len)
{
	int		i;
	char	*str_start;

	*next_len = 0;
	str_start = 0;
	i = 0;
	while ((*actual)[i])
	{
		if (ft_charset(charset, (*actual)[i]) && str_start != 0)
		{
			*actual = str_start + *next_len;
			return (str_start);
		}
		else if (!ft_charset(charset, (*actual)[i]) && str_start == 0)
			str_start = &(*actual)[i];
		if (!ft_charset(charset, (*actual)[i]))
			*next_len = *next_len + 1;
		i++;
	}
	*actual = str_start + *next_len;
	if (*next_len == 0)
		return (0);
	return (str_start);
}

char	**ft_strlen_n_check(char *str, char *charset)
{
	int		nb;
	int		next_len;
	char	**strs;
	char	*actual;

	nb = 0;
	next_len = 0;
	actual = str;
	while (ft_get_next_str(&actual, charset, &next_len))
		nb++;
	if (!(strs = malloc((nb + 1) * sizeof(char *))))
		return (0);
	return (strs);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		next_len;
	char	**master;
	char	*next;
	char	*actual;

	if (!(master = ft_strlen_n_check(str, charset)))
		return (0);
	i = 0;
	actual = str;
	while ((next = ft_get_next_str(&actual, charset, &next_len)))
	{
		master[i] = malloc(next_len * sizeof(char) + 1);
		if (!master[i])
			return (0);
		ft_strncpy(master[i], next, next_len);
		i++;
	}
	master[i] = 0;
	return (master);
}
