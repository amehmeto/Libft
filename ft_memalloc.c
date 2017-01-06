/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 05:37:39 by amehmeto          #+#    #+#             */
/*   Updated: 2016/12/01 10:06:37 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*ptr;

	ptr = malloc(size);
	if (ptr == NULL)
		return (NULL);
	while (size + 1)
	{
		ptr[size] = 0;
		size--;
	}
	return (ptr);
}
