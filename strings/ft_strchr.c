/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmbotho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 15:33:49 by nmbotho           #+#    #+#             */
/*   Updated: 2017/06/25 10:27:22 by nmbotho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strchr(const t_string s, int c)
{
	int	i;

	i = 0;
	if (c == '\0')
		return (&s[ft_strlen(s)]);
	if (ft_isascii(c))
	{
		while (s[i])
		{
			if (s[i] == c)
				return (&s[i]);
			i++;
		}
	}
	return (NULL);
}
