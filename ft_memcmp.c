/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 16:25:06 by amehmeto          #+#    #+#             */
/*   Updated: 2016/12/06 05:41:19 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*tmp_s1;
	unsigned char	*tmp_s2;

	tmp_s1 = (unsigned char *)s1;
	tmp_s2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (*tmp_s1 == *tmp_s2 && n - 1)
	{
		tmp_s1++;
		tmp_s2++;
		n--;
	}
	return ((unsigned char)*tmp_s1 - (unsigned char)*tmp_s2);
}
