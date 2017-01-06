/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 05:29:15 by amehmeto          #+#    #+#             */
/*   Updated: 2016/11/27 16:47:15 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	i = -1;
	j = ft_strlen(s1);
	while (++i < len && s2[i])
		s1[i + j] = s2[i];
	s1[i + j] = '\0';
	return (s1);
}
