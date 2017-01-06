/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 18:32:27 by amehmeto          #+#    #+#             */
/*   Updated: 2016/12/11 23:52:43 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	long	m;
	int		size;
	char	*rslt;

	m = n;
	size = ft_nbdigits(n) + ft_isnegative(n);
	if (!(rslt = (char *)ft_strnew(size)))
		return (NULL);
	if (m < 0)
	{
		*rslt = '-';
		m *= -1;
	}
	*(rslt + size) = '\0';
	while (size-- && *(rslt + size) != '-')
	{
		*(rslt + size) = m % 10 + '0';
		m /= 10;
	}
	return (rslt);
}
