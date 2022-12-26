/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htouil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 18:10:22 by htouil            #+#    #+#             */
/*   Updated: 2022/10/30 19:28:28 by htouil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_it(char *str, char occ)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (str[i])
	{
		if (str[i] != occ && (str[i + 1] == occ || str[i + 1] == '\0'))
				counter++;
		i++;
	}
	return (counter);
}

void	free_it(char **str, int d)
{
	while (d)
	{
		free(str[d]);
		d--;
	}
	free(str);
}

char	**ft_split(const char *s, char c)
{
	char	**arr;
	int		i;
	int		j;
	int		pos;

	if (!s)
		return (NULL);
	arr = (char **)malloc((count_it((char *)s, c) + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	i = 0;
	pos = -1;
	while (++pos < count_it((char *)s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		j = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		arr[pos] = ft_substr(s, j, i - j);
		if (!arr[pos])
			return (free_it(arr, pos), NULL);
	}
	return (arr[pos] = NULL, arr);
}
