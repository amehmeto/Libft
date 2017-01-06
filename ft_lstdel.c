/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/29 18:01:23 by amehmeto          #+#    #+#             */
/*   Updated: 2017/01/03 07:11:26 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	if (*alst && del)
	{
		while ((**alst).next)
		{
			*alst = (**alst).next;
			del((**alst).content, (**alst).content_size);
			free(*alst);
			*alst = NULL;
		}
	}
}
