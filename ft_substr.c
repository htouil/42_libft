/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htouil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 23:06:57 by htouil            #+#    #+#             */
/*   Updated: 2022/11/09 00:28:47 by htouil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*ss;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	if (start > ft_strlen(s))
	{
		ss = malloc(sizeof(char));
		if (!ss)
			return (0);
		ss[i] = '\0';
	}
	else
	{
		if (start + len > ft_strlen(s))
			len = ft_strlen(s) - start;
		ss = malloc((len + 1) * sizeof(char));
		if (!ss)
			return (0);
		while (i++ < len)
			*(ss + i - 1) = *(s + start + i - 1);
		*(ss + i - 1) = '\0';
	}
	return (ss);
}
