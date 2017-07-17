/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcrop.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmbotho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 09:29:31 by nmbotho           #+#    #+#             */
/*   Updated: 2017/06/25 10:29:20 by nmbotho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strcrop(t_string s, size_t start_index, size_t end_index)
{
	size_t		k;
	size_t		i;
	t_string	new;

	k = start_index;
	i = 0;
	new = ft_strnew(end_index - start_index);
	if (!new)
		return (NULL);
	else
	{
		while (k <= end_index)
		{
			new[i] = s[k];
			k++;
			i++;
		}
	}
	return (new);
}
