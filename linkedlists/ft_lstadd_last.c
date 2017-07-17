/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_last.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmbotho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/17 15:02:36 by nmbotho           #+#    #+#             */
/*   Updated: 2017/06/25 10:17:08 by nmbotho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstadd_last(t_list **alst, t_list *link)
{
	t_list	*current;

	current = *alst;
	if (*alst)
	{
		while (current->next)
			current = current->next;
		current->next = link;
	}
	else
		*alst = link;
}
