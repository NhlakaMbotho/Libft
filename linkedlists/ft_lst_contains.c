/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_conatins.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmbotho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/20 10:39:28 by nmbotho           #+#    #+#             */
/*   Updated: 2017/06/25 11:18:20 by nmbotho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_lst_contains(t_list *alst, void *content)
{
	t_list *current;

	current = alst;
	while (current->next)
	{
		if (current->content == content)
			return (1);
		current = current->next;
	}
	return (0);
}
