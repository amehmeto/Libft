/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/29 18:05:32 by amehmeto          #+#    #+#             */
/*   Updated: 2017/01/06 13:44:45 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	(void)alst;
	(void)new;
	if (alst && new)
	{
		printf("*alst = %p\n", *alst);
		new->next = *alst;
		printf("new->next = %p\n", new->next);
	}
}
