/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmbotho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 16:54:32 by nmbotho           #+#    #+#             */
/*   Updated: 2017/06/25 10:38:27 by nmbotho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_string	*ft_strsplit(t_string s, char c)
{
	int			i;
	t_strnode	*list;
	char		*temp;
	int			end;

	list = NULL;
	i = 0;
	end = 0;
	if (s == NULL)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c && s[i] != '\0')
		{
			end = ft_get_last_char(s, i, c);
			if (end == -1)
				return (ft_linkedlist_to_array(&list));
			temp = ft_strcrop(s, i, end);
			ft_addstring(&list, temp);
			i = end;
		}
		i++;
	}
	return (ft_linkedlist_to_array(&list));
}