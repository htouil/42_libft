/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htouil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 00:02:33 by htouil            #+#    #+#             */
/*   Updated: 2022/11/05 21:49:24 by htouil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	a;
	int		len;

	a = (char)c;
	len = ft_strlen((char *)s);
	s = s + len;
	while (len)
	{
		if (*s == a)
			return ((char *)s);
		s--;
		len--;
	}
	if (*s == a)
		return ((char *)s);
	return (NULL);
}
