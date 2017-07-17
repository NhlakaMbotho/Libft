/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmbotho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 16:57:18 by nmbotho           #+#    #+#             */
/*   Updated: 2017/06/25 10:38:03 by nmbotho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_string	ft_strrchr(const t_string str, int ch)
{
	int		i;
	char	*new_s;

	i = (int)ft_strlen(str);
	new_s = NULL;
	if (ft_isascii(ch))
	{
		while (i >= 0)
		{
			if (str[i] == ch)
			{
				new_s = &str[i];
				break ;
			}
			i--;
		}
	}
	return (new_s);
}
