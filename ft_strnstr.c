/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htouil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 23:35:29 by htouil            #+#    #+#             */
/*   Updated: 2022/11/06 02:42:45 by htouil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*h;
	char	*n;
	size_t	i;
	size_t	j;

	h = (char *)haystack;
	n = (char *)needle;
	i = 0;
	j = 0;
	if (n[j] == '\0')
		return (h);
	while (h[i] != '\0' && n[j] != '\0' && i < len)
	{
		while (h[i + j] == n[j] && h[i + j] != '\0' && i + j < len)
			j++;
		if (n[j] == '\0')
			return (h + i);
		j = 0;
		i++;
	}
	return (0);
}
