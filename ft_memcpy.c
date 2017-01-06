/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 02:23:58 by amehmeto          #+#    #+#             */
/*   Updated: 2016/12/12 00:41:57 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;

	i = -1;
	tmp_dst = (unsigned char *)dst;
	tmp_src = (unsigned char *)src;
	while (++i < n)
		tmp_dst[i] = tmp_src[i];
	return (dst);
}
