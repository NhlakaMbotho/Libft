/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmbotho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/17 15:00:29 by nmbotho           #+#    #+#             */
/*   Updated: 2017/06/25 10:19:17 by nmbotho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstnew(void *content, size_t content_size)
{
	t_list	*head;

	head = (t_list*)malloc(sizeof(t_list));
	if (!head)
		return (NULL);
	head->next = NULL;
	if (content)
	{
		head->content = content;
		head->content_size = content_size;
	}
	else
	{
		head->content = NULL;
		head->content_size = 0;
	}
	return (head);
}
