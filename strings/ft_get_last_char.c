/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_last_char.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmbotho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 13:06:52 by nmbotho           #+#    #+#             */
/*   Updated: 2017/06/25 10:10:55 by nmbotho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_get_last_char(t_string s, size_t current_index, char skip)
{
	size_t	s_len;

	s_len = ft_strlen(s);
	while ((s[current_index] != skip) && current_index < s_len)
		current_index++;
	if (current_index > s_len)
		return (-1);
	return (current_index - 1);
}
