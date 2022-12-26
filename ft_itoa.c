/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htouil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 19:33:20 by htouil            #+#    #+#             */
/*   Updated: 2022/11/09 00:37:27 by htouil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*nbr;
	int			j;
	long int	x;

	x = n;
	j = count(x);
	if (x == 0)
		return (ft_strdup("0"));
	nbr = malloc((j + 1) * sizeof(char));
	if (!nbr)
		return (0);
	if (x < 0)
	{
		nbr[0] = '-';
		x *= -1;
	}
	nbr[j] = '\0';
	while (j-- > 0 && x != 0)
	{
		nbr[j] = (x % 10) + '0';
		x /= 10;
	}
	return (nbr);
}
